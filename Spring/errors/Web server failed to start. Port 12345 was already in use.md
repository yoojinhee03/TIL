## Web server failed to start. Port 12345 was already in use.

### 문제

포트가 이미 사용중이다.

```
Description:

Web server failed to start. Port 12345 was already in use.

Action:

Identify and stop the process that's listening on port 12345 or configure this application to listen on another port.

2020-07-02 11:28:11.405  INFO 5288 --- [  restartedMain] o.s.s.concurrent.ThreadPoolTaskExecutor  : Shutting down ExecutorService 'applicationTaskExecutor'
```

### 해결방법

Terminate 클릭 > Remove Launch 클릭