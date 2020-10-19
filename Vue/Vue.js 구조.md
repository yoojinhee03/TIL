# Vue.js 구조

프로젝트 생성후 기본적인 폴더 구조는 아래와 같다.

```
├─ node_modules
├─ README.md
├─ public
   ├─ favicon.ico
   ├─ index.html   
├─ babel.config.js
├─ package.json
└─ src
   ├─ main.js
   ├─ App.vue
   └─ assets
      └─ logo.png
├─ yarn.lock
```

- node_modules : 모든 nodejs의 프로젝트가 공통으로 가지는 폴더이다.

- public : 프로젝트를 배포할 때 필요한 파일들이 들어 있다.

- src : 소스 파일들을 저장하는 폴더로 개발할 때 필요한 핵심 폴더이다.

- package.json : 모든 nodejs의 프로젝트가 공통으로 가지는 설정 저장용 파일이다.

- babel.config.js : js의 버전을 변환해주는 babel의 설정파일이다.

- yarn.lock : 패키지관리시스템의 lock 파일이다.

  

실무에서 개발할 때 기능 별로 구분한 폴더 구조는 아래와 같다.

```
└─ src
   ├─ main.js
   ├─ App.vue
   ├─ components        컴포넌트
   │  ├─ common
   │  └─ ...
   ├─ routes            라우터
   │  ├─ index.js
   │  └─ routes.js
   ├─ views             라우터 페이지
   │  ├─ MainView.vue
   │  └─ ...
   ├─ store             상태 관리
   │  ├─ auth
   │  ├─ index.js
   │  └─ ...
   ├─ api               api 함수
   │  ├─ index.js
   │  ├─ users.js
   │  └─ ...
   ├─ utils             필터 등의 유틸리티 함수
   │  ├─ filters.js
   │  ├─ bus.js
   │  └─ ...
   ├─ mixins            믹스인
   │  ├─ index.js
   │  └─ ...
   ├─ plugins           플러그인
   │  ├─ ChartPlugin.js
   │  └─ ...
   ├─ translations      다국어
   │  ├─ index.js
   │  ├─ en.json
   │  └─ ...
   ├─ images            이미지
   ├─ fonts             폰트
   └─ assets            기타 자원
```

