## Spring MVC(Model View Controller)



1. Model : 애플리케이션 정보, 데이터 처리관리

2. View : 사용자 인터페이스

3. Controller : Model과 View간 상호동작 조정

   

* **컨트롤러**란?
  * 응답 요청을 처리해야 하는 클래스
  * 해당 클래스 내부에 메소드를 정의하여 URL 매핑하고 해당 메소드에서 요청 처리
    * 요청에 따라 어떤 처리를 할지를 결정해주며 단, controller는 결정만 해주고 실질적인 처리는 서비스에서 담당
 * **디스패쳐 서블릿**란?
    * 가장 앞단에서 모든 요청을 받아서(Front Controller 패턴) 요청 URL과 관련된 적절한 컨트롤러에 요청 정보를 전달
* **뷰 리졸버**란?
    * 어떻게 뷰를 가공 및 처리하고 내용을 만들어낼 지에 대한 전략을 알고 있는 클래스

| 구성요소         | 설명                                                         |
| ---------------- | ------------------------------------------------------------ |
| DispatcherSevlet | 클라이언트의 요청을 전달받는다.<br />Controller에게 클라이언트의 요청을 전달하고, Controller가 리턴한 결과값을 View에 전달하여 알맞은 응답을 생성하도록 한다. |
| HandlerMapping   | 클라이언트의 요청 URL을 어떤 Controller가 처리할지를 결정한다. |
| Controller       | 클라이언트의 요청을 처리한 뒤, 그 결과를 DispatcherServlet에 알려준다. |
| ViewResolver     | Commander의 처리 결과를 보여줄 View를 결정한다.              |
| View             | Commander의 처리 결과를 보여줄 응답을 생성한다.              |

### Spring 기본 동작 순서 및 구조

[이미지 출처](http://server-engineer.tistory.com/253)

* case1

![스프링정리](https://user-images.githubusercontent.com/66635648/84276107-e8df7e00-ab6c-11ea-8ee7-2804bd079580.png)



* case2

![캡처](https://user-images.githubusercontent.com/66635648/84276245-13c9d200-ab6d-11ea-8529-811ceb5e234b.PNG)

## Controller 작성

### 요청을 처리할 컨트롤러 클래스 작성

컨트롤러 클래스 선언(@RestController 혹은 @Controller 어노테이션 사용)

```java
@RestController 
public class Controller { 
}
```



## Handler Mapping

### 컨트롤러에 요청 URL을 처리할 핸들러(메소드) 맵핑

맵핑 메소드 추가

```java
@RestController 
public class MyController {
	@RequestMapping("/hello")   
    public String hello() {        
    	return "<h1>Hello</h1>";   
    } 
}
```

