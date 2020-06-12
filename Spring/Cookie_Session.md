## 쿠키와 세션을 사용하는 이유

HTTP 프로토콜의 특징이자 약점을 보완하기 위해서 사용한다.

### HTTP 프로토콜의 특징

* 비연결성(Connectionless)

  * 클라이언트와 서버가 한 번 연결을 맺은 후, 클 라이언트 요청에 대해 서버가 응답을 마치면 맺었던 연결을 끊는다.

* 무상태(Stateless)

  * 연결을 끊는 순간(Connectionless) 클라이언트와 서버의 통신이 끝나며 상태 정보를 유지하지 않는다.

## 쿠키

### 쿠키(Cookie)

* 클라이언트 측에 저장되는 **키와 값**이 들어있는 문자열 형태의 작은 데이터 파일이다.
* 브라우저별로 저장된다.
  * ex) 크롬에서 저장된 쿠키 정보는 크롬에서만 이용가능



### 쿠키 사용 사례

* 자동로그인

* "오늘 더 이상 이 창을 보지 않음" 팝업창

* 쇼핑몰의 장바구니

  

### 쿠키 값 추가하기

```java
//쿠키 값을 저장하는 핸들러
for(String key : params.keySet()) {
        // 문자열 타입의 키, 값을 이용하여 쿠키 정보 생성 (스펙상 문자열 밖에 저장 불가)
        Cookie c = new Cookie(key, params.get(key).toString());
        c.setMaxAge(60);
   	 	c.setPath("/page");
    	/*/page 라는 특정주소로만 해당 쿠키 데이터를 보냄*/
        c.setHttpOnly(true);
        c.setSecure(true);
        response.addCookie(c);
}
```

#### 메소드

* setMaxAge 메소드 : 만료시간(초 단위)
  * 만료시간이 끝나면 쿠키 정보 삭제
  * 절대 시간으로 적용
* setPath 메소드 : 해당 쿠키 데이터를 보낼 특정 주소(path) 설정
* setHttpOnly 메소드 : 자바스크립트를 이용한 쿠키 접근 금지 가능
  * 보안성 향상
* setSecure 메소드 : HTTPS 를 통해 통신할 경우에만 쿠키를 전송하도록 허용 가능



### 쿠키 값 가져오기

```java
//쿠키 값을 가져오는 핸들러
@CookieValue(value="data1", defaultValue="Hello") String data1, 
@CookieValue(value="asdf", required=false) String asdf
```

* **@CookieValue 어노테이션 사용**하여 쿠키에 저장된 데이터 가져오기 가능 (value에 적힌 값이 가져올 쿠키의 이름, 기본값, 필수 여부도 지정 가능)

```java
String result = "no cookies";
// 요청 메시지를 통해 받은 모든 쿠키 객체 가져오기
Cookie[] cookies = request.getCookies();
    if(cookies != null) {
    	result = "";
    	for(Cookie c : cookies) {
    	// 쿠키의 이름(=키)와 값 출력
    	result += c.getName() + " : " + c.getValue() + "\n";
    }
}
```

* 요청 객체를 통해 쿠키 데이터 접근 가능
* 

### 요청 헤더/응답 헤더

#### 응답 헤더

* 개별 쿠키 정보마다 **Set-Cookie 헤더**를 추가



## 쿠키와 세션의 차이점

|                   | 쿠키                                         | 세션                                 |
| ----------------- | -------------------------------------------- | ------------------------------------ |
| 저장위치          | 클라이언트                                   | 서버                                 |
| 보안              | 취약                                         | 비교적 좋음                          |
| 라이프<br> 사이클 | 브라우저를 종료해도 정보가 남아있을 수 있다. | 브라우저가 종료되면 정보가 삭제된다. |
| 속도              | 빠름                                         | 느림                                 |

