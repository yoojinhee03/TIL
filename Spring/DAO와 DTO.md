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

**VO(Value Object)**라고도 한다.

- 계층간 데이터 교환을 위한 자바 객체(Beans)
- 로직을 갖고 있지 않는 순수한 데이터 객체

대표적으로 form데이터/데이터베이스 테이블 Bean이 있다. 즉 각 폼요소나 데이터베ㅣ스 레코드의 데이터를 매핑하기 위한 데이터 객체를 말한다.

```java
public class userVo {
	private String userid;
	private String username;
	private String password;
	
	public void setUserid(String userid) {
		this.userid = userid;
	}
	public String getUsername() {
		return username;
	}
	public void setUsername(String username) {
		this.username = username;
	}
	public String getPassword() {
		return password;
	}
	public void setPassword(String password) {
		this.password = password;
	}
}
```

