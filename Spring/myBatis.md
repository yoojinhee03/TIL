# MyBatis

## myBatis란?

자바의 관계형 데이터베이스 프로그래밍을 쉽게 도와주는 프레임워크이다.

자바에서 제공하는 JDBC보다 편리하게 사용하기 위해서 개발되었다.



기존과는 달리 DAO파일에 SQL문을 작성하지 않고, **mapper 파일에 sql쿼리문을 입력하고 DAO에서 호출**하여 사용한다.

## myBatis 설정

```xml
<!--사용하는 DB에 따라 설정해주면 된다. 여기서는 postgresql로 설정하였다-->
<dependency>
    <groupId>org.postgresql</groupId>
    <artifactId>postgresql</artifactId>
    <scope>runtime</scope>
</dependency>
<dependency>
    <groupId>org.springframework.boot</groupId>
    <artifactId>spring-boot-starter-jdbc</artifactId>
</dependency>
<dependency>
    <groupId>org.mybatis.spring.boot</groupId>
    <artifactId>mybatis-spring-boot-starter</artifactId>
    <version>1.3.2</version>
</dependency>
<dependency> 
    <groupId>org.mybatis</groupId>
    <artifactId>mybatis-spring</artifactId>
    <version>1.3.2</version>
</dependency>    
```