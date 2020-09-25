## Error configuring application listener of class org.springframework.web.context.ContextLoaderListener

### 문제

Update Project를 클릭시 maven 라이브러리 경로가 삭제됨

```
SEVERE: 클래스 [org.springframework.web.context.ContextLoaderListener]의 애플리케이션 리스너를 설정하는 중 오류 발생
java.lang.ClassNotFoundException: org.springframework.web.context.ContextLoaderListener
	at org.apache.catalina.loader.WebappClassLoaderBase.loadClass(WebappClassLoaderBase.java:1365)
	at org.apache.catalina.loader.WebappClassLoaderBase.loadClass(WebappClassLoaderBase.java:1188)
	at org.apache.catalina.core.DefaultInstanceManager.loadClass(DefaultInstanceManager.java:539)
	at org.apache.catalina.core.DefaultInstanceManager.loadClassMaybePrivileged(DefaultInstanceManager.java:520)
	at org.apache.catalina.core.DefaultInstanceManager.newInstance(DefaultInstanceManager.java:150)
	at org.apache.catalina.core.StandardContext.listenerStart(StandardContext.java:4602)
	at org.apache.catalina.core.StandardContext.startInternal(StandardContext.java:5139)
	.
	.
	.
```

### 해결방법

프로젝트 우클릭 > properties > Deployment Assembly > Add 버튼 > Java Build Path Entries > Maven Dependencies 선택 > Apply버튼



