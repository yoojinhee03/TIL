## MyBatis

### myBatis란?

자바의 관계형 데이터베이스 프로그래밍을 쉽게 도와주는 프레임워크이다.

자바에서 제공하는 JDBC보다 편리하게 사용하기 위해서 개발되었다.



기존과는 달리 DAO파일에 SQL문을 작성하지 않고, **mapper 파일에 sql쿼리문을 입력하고 DAO에서 호출**하여 사용한다.

### myBatis 설정

**곧 내용추가 할 예정**

### 호출순서

1. request 페이지 요청
2. controller에서 매핑
3. service 호출
4. dao 접근
5. sql 호출하여 데이터를 가져옴