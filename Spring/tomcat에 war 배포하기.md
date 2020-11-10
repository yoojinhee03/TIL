# tomcat에 war 배포하기

1. pom.xml 수정하기

```xml
<packaging>war</packaging>
```

tomcat에 배포하기 위한 war를 빌드하기 위해서는 pom.xml에 `<packaging>war</packaging>`를 추가해야 한다.



내장 톰캣을 사용하지 않는다면 다음 의존성을 추가해야한다.

```xml
<dependency>
    <groupId>org.springframework.boot</groupId>
    <artifactId>spring-boot-starter-tomcat</artifactId>
    <scope>provided</scope>
</dependency>	
```

2. Application.java 설정하기

```java
@EnableAspectJAutoProxy
@SpringBootApplication
public class Application extends SpringBootServletInitializer{
	
	@Override
	protected SpringApplicationBuilder configure(SpringApplicationBuilder builder) {
		return builder.sources(Application.class);
	}
	
	public static void main(String[] args) throws Exception{
		SpringApplication.run(Application.class, args);
	}

}
```

프로젝트 우클릭 -> Run As -> Maven install 를 눌러보자.

war가 build 된 최종 위치를 확인할 수 있을것이다.



3. command창으로 배포하기

```
//scp 파일명 계정명@IP주소:전송할 경로
//로컬서버 -> 원격 서버로 파일 전송
scp test.war root@111.222.333.444:/root/test.jar

//ssh 계정명@IP주소
//리눅스 접속
ssh root@111.222.333.444
```

