# Controller에서 jsp로 값 넘길때 한글깨지는 현상 해결하기

```java
@RequestMapping(value="/test",produces="text/plain; charset=UTF-8")
```

위의 `produces="text/plain; charset=UTF-8"`를 추가해주면 한글이 깨지지 않는다.

