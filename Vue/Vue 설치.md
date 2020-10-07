## 1. vue 설치

### 1.1 CDN

간단한 vue 프로젝트를 만들때 이용하는 방법이다. vue를 사용하고자 하는 html파일에서 아래의 한 줄을 추가하면 된다.

```html
<script src="https://unpkg.com/vue"></script>
```

### 1.2 NPM

대규모 프로젝트를 만들거나 vue 폴더 셋팅을 하기위해서 이용하는 방법이다. CMD 창을 열어서 아래의 명령어 한 줄을 치면 된다.

```
npm install vue
```

만약 `'npm'이 내부 또는 외부 명령, 실행할 수 있는 프로그램, 또는 배치 파일이 아닙니다.`라고 뜬다면?

node.js를 설치해야한다.

만약 node.js를 설치했음에도 위와 같이 뜬다면?

환경변수를 설정했는지 확인해보자.

시스템 환경 변수 편집>환경변수 클릭>시스템 변수의 Path 클릭>`C:\Program Files\nodejs` 있는지 확인하고 없다면 `C:\Program Files\nodejs`를 추가해주면 된다.

## 2. vue-cli

Vue.js에서는 vue 개발 환경을 설정해주는 도구인 Vue CLI(Command Line Interface)를 지원한다.

### 2.1 vue-cli 설치

CMD 창을 열어서 아래의 명령어 한 줄을 치면 된다.

```
npm install -g vue-cli
```





번외로, **Vue CLI UI**라는 것이 있다. Vue CLI 기능을 UI에서 사용할 수 있어 굉장히 편리하다. Vue CLI UI를 사용하기 위해서는 CMD 창에서 아래와 같이 명령어 한 줄을 치면 된다.

```
vue ui
```

만약 `'vue'이 내부 또는 외부 명령, 실행할 수 있는 프로그램, 또는 배치 파일이 아닙니다.`라고 뜬다면?

환경변수를 설정했는지 확인하면 된다.

시스템 환경 변수 편집>환경변수 클릭>시스템 변수의 Path 클릭>`C:\Users\[사용자이름]\AppData\Roaming\npm`이 있는지 확인하고 없다면 `C:\Users\[사용자이름]\AppData\Roaming\npm`를 추가해주면 된다.