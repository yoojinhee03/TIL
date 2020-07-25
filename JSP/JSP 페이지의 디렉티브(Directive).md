### 페이지의 디렉티브

1. page
2. include
3. taglib

#### page 디렉티브

`<%@ page%>`

* JSP 페이지에 대한 필요한 **설정정보**는 page 디렉티브의 속성들을 사용해서 정의

| 속성명       | 속성의 기본값                   | 사용법                                         | 속성설명                                                     |
| ------------ | ------------------------------- | ---------------------------------------------- | ------------------------------------------------------------ |
| info         |                                 | info="설명입니다"                              | **페이지를 설명**해 주는 문자열을 지정                       |
| language     | "java"                          | language="java"                                | JSP 페이지의 스크립트 요소에서 **사용할 언어**를 지정        |
| contentType  | "text/html; charset=ISO-8859-1" | contentType="text/html; charset=charset=utf-8" | JSP 페이지가 생성할 **문서의 타입**을 지정하는 속성          |
| extends      |                                 | extends="system.MastreClass"                   | 자신이 **상속 받을 클래스를 지정**할 때 사용하는 속성        |
| import       |                                 | import="java.util.*"                           | 다른 패키지에 있는 클래스를 가져다 쓸 때 사용하는 속성       |
| session      | "true"                          | session="true"                                 | **HttpSession을 사용**할지 여부를 지정하는 속성              |
| buffer       | "8kb"                           | buffer="10kb"<br>buffer="none"                 | JSP 페이지의 **출력버퍼의 크기**를 지정하는 속성             |
| autoFlush    | "true"                          | autoFlush="false"                              | 출력버퍼가 다 찰 경우에 저장되어 있는 내용의 처리를 설정하는 속성 |
| isThreadSafe | "true"                          | isThreadSafe="true"                            | 현재 페이지에 **다중 쓰레드**를 허용할지 여부를 설정하는 속성 |
| errorPage    |                                 | errorPage="error/fail.jsp"                     | 에러발생시 **에러를 처리할 페이지를 지정**하는 속성          |
| isErrorPage  | "false"                         | isErrorPage="false"                            | 해당페이지를 **에러페이지로 지정**하는 속성                  |
| pageEncoding | "ISO-8859-1"                    | pageEncoding="utf-8"                           | 해당페이지의 **문자 인코딩**을 지정하는 속성                 |
| isELIgnored  | jsp 버전 및 설정에 따라 다름    | isELIgnored="true"                             | 표현 언어(EL)에 대한 지원여부를 설정하는 속성                |

#### include 디렉티브

`<%@ include file="포함될 파일의 URL"@>`

* JSP 페이지에서는 여러 JSP페이지에서 **공통적**으로 사용되는 내용이 있을때, 이러한 내용을 별도의 파일로 저장해서 필요한 JSP페이지 내에 삽입할 수 있는 기능을 제공(유지보수)
* JSP 페이지의 소스 내용을 그대로 포함해서 컴파일(주로 조각코드 삽입)

#### taglib 디렉티브

`<%@ taglib%>`

* taglib 디렉티브는 표현언어(EL : Expression Language), JSTL(JSP Standard Tag Library), 커스텀 태그(Custom Tag)를 JSP 페이지 내에 사용할 때 사용됨

















