# CORS와 해결방법

## (+)추가_2020.11.17



## 1. CORS란?

Cross Origin Resource Sharing의 줄임말로, 교차 출처 리소스 공유라고 해석할 수 있다. 여기서 말하는 교차 출처는 다른 출처를 의미한다. 

### 출처(Origin)는 무엇인가?

`https://search.naver.com/search.naver?query=CORS`는 여러개의 구성요소로 이루어져있다.

- **https://** : Protocol
- **search.naver.com** : Host
- **/search.naver** : Path
- **?query=CORS** : Query String

URL은 위와 같이 *Protocol, Host, Path, Query String* 등등 요소들로 이루어져 있다.

이때 **출처**는 *Protocol, Host,(+port 번호)*까지를 말한다. `https://search.naver.com`을 출처라고 할 수 있다.(HTTP, HHTS 기본 포트 번호가 정해져있기 때문에 포트번호는 생략이 가능하다)

만약 `https://test.com:8090`과 같이 포트번호가 명시적으로 포함되어 있다면 포트번호까지 일치해야 같은 출처라고 할 수 있다.

## 2. SOP란?

Same-Origin Policy의 줄임말로, '같은 출처에서만 리소스를 공유할 수 있다'라는 정책이다.

## 2. 해결방법

1. proxy
2. jsonp
3. jquery 플러그인

## Reference

https://evan-moon.github.io/2020/05/21/about-cors/

