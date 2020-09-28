## 처리 순서

1. Client가 Request를 보낸다.
2. 요청 URL에 맞는 @Controller가 수신한다.
3. Controller는 Service를 호출한다.
4. Service는 Controller부터 넘어온 요청을 처리한다.
   1. DB 처리하기 위해서는 Service에서 DAO를 호출한다.
   2. DAO는 DB에 접근하여 요청을 처리한다.
5. Service는 처리한 요청을 가공하여 Controller에게 데이터를 넘긴다.
6. Controller는 Service에게 받은 결과를 Client에게 전달한다.

## Controller

- 사용자의 요청을 어떻게 처리할지 결정함

```java
@Controller
//어노테이션
//Client의 Request가 서버에 도착했을 때 @Controller의 내용을 기준으로 요청을 처리
public class postController {
	
    @Autowired
    //@Autowired : 해당 빈을 찾아서 주입
    private postServiceInterface postServiceIf;
    
    @RequestMapping(value = "/list.os", method = RequestMethod.GET)
    //어노테이션 
    //Client의 Request를 처리하는 기준점
	public String list(Model model) throws Exception {
		//파라미터
        //Model model : 리턴할 페이지에 전달해야할 내용이 있을 경우에 model에 데이터를 담는다
		
		return "/list";	
        //어떠한 페이지를 리턴할지 결정
	}
}
```

## Service

- 사용자 요청에 대해 어떤 처리를 할지 결정함

1. interface 만들기

```java
public interface postServiceInterface {
	public List<listVo> listAll() throws Exception;
}
```

2. interface 구현하기

```java
@Service
//@Service 어노테이션을 붙여줘야 Spring에서 Service 역할을 하는지 인식
public class postServiceImpl implements postServiceInterface{
    
    @Autowired
	private postDao postDaoImpl;

    @Override
	public List<listVo> listAll() throws Exception {
		return postDaoImpl.listAllDao(pagingVo);
	}
}
```



## DAO(Data Access Object)

- DB를 이용하여 데이터를 조회 및 조작하는 기능을 담당하는 것
- DB의 데이터에 접근하는 객체

사용자는 Interface를 DAO에서 던지고 DAO는 Interface를 구현한 객체를 사용자에게 반환한다.

### 그렇다면 DAO를 사용함으로써 장점은 무엇이 있을까?

- 알아보기 쉬운 코드
- 비지니스 객체에 대한 코드 복잡성 ↓
- 데이터 엑세스에 대한 접근을 레이어 단위로 분리
- 확장성
- 계층형 구조 디자인 가능
- 테스트의 편의성

```java
@Repository
public class postDao {
	protected static final String NAMESPACE = "com.secnc.sstopcweb.dao.postDao.";
	
	@Autowired
	private SqlSession sqlSession;
    
	public List<postVo> listAllDao() throws Exception{
		return sqlSession.selectList(NAMESPACE+"selectPostPagingDao");
	}
}
```



## DTO(Data Transfer Object)

VO(Value Object)라고도 한다.

- 계층간 데이터 교환을 위한 자바 객체(Beans)
- 로직을 갖고 있지 않는 순수한 데이터 객체

대표적으로 form데이터/데이터베이스 테이블 Bean이 있다. 즉 각 폼요소나 데이터베이스 레코드의 데이터를 매핑하기 위한 데이터 객체를 말한다.

```java
public class postVo {
	private String userId;
	private String postno;
	private String title;
	private String date;
	private String description;
	private String views;
    
    public String getUserId() {
		return userId;
	}
	public void setUserId(String userId) {
		this.userId = userId;
	}
	public String getPostno() {
		return postno;
	}
	public void setPostno(String postno) {
		this.postno = postno;
	}
	public String getTitle() {
		return title;
	}
	public void setTitle(String title) {
		this.title = title;
	}
	public String getDate() {
		return date;
	}
	public void setDate(String date) {
		this.date = date;
	}
	public String getDescription() {
		return description;
	}
	public void setDescription(String description) {
		this.description = description;
	}
	public String getViews() {
		return views;
	}
	public void setViews(String views) {
		this.views = views;
	}
}
```

> @Data라는 어노테이션(lobok 설치해야함)을 사용하면 getter/setter 선언을 하지 않아도 된다.