### 1. 주석(comment)

`//한 줄 주석`

`/*여러줄 주석*/`

### 2. 타입(type)

| 타입    | 비고                                  |
| ------- | ------------------------------------- |
| num     | int와 double의 supertype              |
| int     | 정수                                  |
| double  | 실수                                  |
| String  | 문자열                                |
| bool    | true 또는 false를 가지는 Bollean type |
| var     | 타입 미지정 및 **타입 변경 불가**     |
| dynamic | 타입 미지정 및 **타입 변경 가능**     |
| List    | 다트의 array는 list로 대체            |
| Set     | 순서가 없고 중복 없는 collection      |
| Map     | key, value 형태를 가지는 collection   |

### 3. 상수

```dart
final int PRICE = 1000;
final NAME = 'kim';//타입 생략 가능
PRICE = 2000;//에러
```



#### 3-1. final

**런타임**에 상수화가 된다.

#### 3-2. const

**컴파일 시점**에 상수화가 된다.



### 4. 함수

```dart
void main() {
  print(add(1, 3));
}

add(int a, int b) {
  return a + b;
}
```

* 타입 생략 가능하다.

```dart
void main() {
  print('${1 + 3} X ${1 - 3} = ${multi(add(1, 3), sub(1, 3))}');
}

add(int a, int b) {
  return a + b;
}

sub(int a, int b) {
  return a - b;
}

multi(int a, int b) {
  return a * b;
}
```

* 인자로 함수 전달 가능하다.

``` dart
void main() {
  print('${add(1, b: 2)}');
  print('${sub(1)}');
}

add(int a, {int b = 0}) {
  return a + b;
}

sub(int a, [int b = 1]) {
  return a - b;
}
```

* 매개변수명을 이용하여 인자 값을 넘길 수 있다.
* 인자 값을 넘겨줄 매개변수는 {}/[]로 감싸야 한다.
* 넘어온 인자값이 없으면 초깃값을 사용한다.

```dart
void main() {
  print('${add(1, 2)}');
}

// add(int a, {int b = 0}) {
//   return a + b;
// }
add(a, b) => a + b;
```

* {};대신 =>로 사용한다.(람다식)

