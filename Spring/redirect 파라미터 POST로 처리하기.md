# redirect 파라미터 POST로 처리하기

스프링에서 redirect를 사용할 때 넘긴 파라미터 값이 url에 노출이 되는 경우가 있다. 예를 들어 `post?name=유진희&age=18`와 같은 **쿼리스트링** 형태로 데이터가 노출된다.
아래의 두가지는 데이터 노출을 원하지 않을 때 사용하는 방법이다.

1. RedirectAttributes 사용하기
2. FlashMap 사용하기
