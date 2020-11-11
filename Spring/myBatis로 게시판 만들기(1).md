# myBatis로 게시판 만들기(1)

## 1. Spring Initializr로 프로젝트 생성하기

https://start.spring.io/에서 스프링 부트 프로젝트를 쉽게 만들 수 있다.

![image](https://user-images.githubusercontent.com/66635648/98754410-fe055500-2409-11eb-9744-0dab8b92824a.png)

위 사이트에 접속하면 이와 같은 화면이 보일 것이다.

- Project : 사용할 빌드 툴(Maven/Gradle)
- Laguage : 사용할 언어(Java/Kotlin/Groovy)
- Spring Boot : 버전
- Project Jetadata
  - Group : 그룹명(도메인)
  - Artifact : 프로젝트명
- Dependencies : 의존성 

설정을 마치면 Generate 클릭하여 zip 파일을 다운로드 받는다.

## 2. STS에서 프로젝트 생성하기

File > Import  > (Gradle/Maven) > (Existing Gradle Project/Existing Maven Projects) 순서대로 프로젝트를 Import한다.

## 3. 실행하기

프로젝트 우클릭 > Run As > Java Application > 프로젝트명+Application 선택 후 Ok 클릭하면 끝~

localhost:[포트번호]로 접속하면 된다.