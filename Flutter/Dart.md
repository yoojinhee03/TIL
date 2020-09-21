- [주석(comment)](https://github.com/yoojinhee03/TIL/blob/master/Flutter/Dart.md#1-%EC%A3%BC%EC%84%9Dcomment)
- [타입(type)](https://github.com/yoojinhee03/TIL/blob/master/Flutter/Dart.md#2-%ED%83%80%EC%9E%85type)
- [상수](https://github.com/yoojinhee03/TIL/blob/master/Flutter/Dart.md#3-%EC%83%81%EC%88%98)
  - [final](https://github.com/yoojinhee03/TIL/blob/master/Flutter/Dart.md#3-1-final)
  - [const](https://github.com/yoojinhee03/TIL/blob/master/Flutter/Dart.md#3-2-const)
- [함수](https://github.com/yoojinhee03/TIL/blob/master/Flutter/Dart.md#41-%ED%95%A8%EC%88%98)
  - [void 생략/$ 기호](https://github.com/yoojinhee03/TIL/blob/master/Flutter/Dart.md#42-void-%EC%83%9D%EB%9E%B5-%EA%B8%B0%ED%98%B8)
  - [함수와 클래스 안 메소드](https://github.com/yoojinhee03/TIL/blob/master/Flutter/Dart.md#43-%ED%95%A8%EC%88%98%EC%99%80-%ED%81%B4%EB%9E%98%EC%8A%A4-%EC%95%88-%EB%A9%94%EC%86%8C%EB%93%9C)
  - [람다식](https://github.com/yoojinhee03/TIL/blob/master/Flutter/Dart.md#44-%EB%9E%8C%EB%8B%A4%EC%8B%9D)
  - [선택 매개변수](https://github.com/yoojinhee03/TIL/blob/master/Flutter/Dart.md#45-%EC%84%A0%ED%83%9D-%EB%A7%A4%EA%B0%9C%EB%B3%80%EC%88%98)
- [연산자](https://github.com/yoojinhee03/TIL/blob/master/Flutter/Dart.md#7-%EC%97%B0%EC%82%B0%EC%9E%90)
  - [산술 연산자](https://github.com/yoojinhee03/TIL/blob/master/Flutter/Dart.md#71-%EC%82%B0%EC%88%A0-%EC%97%B0%EC%82%B0%EC%9E%90)
  - [할당 연산자](https://github.com/yoojinhee03/TIL/blob/master/Flutter/Dart.md#72-%ED%95%A0%EB%8B%B9-%EC%97%B0%EC%82%B0%EC%9E%90)
  - [관계 연산자](https://github.com/yoojinhee03/TIL/blob/master/Flutter/Dart.md#73-%EA%B4%80%EA%B3%84-%EC%97%B0%EC%82%B0%EC%9E%90)
  - [비트 & 시프트 연산자](https://github.com/yoojinhee03/TIL/blob/master/Flutter/Dart.md#74-%EB%B9%84%ED%8A%B8--%EC%8B%9C%ED%94%84%ED%8A%B8-%EC%97%B0%EC%82%B0%EC%9E%90)
  - [타입 검사 연산자](https://github.com/yoojinhee03/TIL/blob/master/Flutter/Dart.md#75-%ED%83%80%EC%9E%85-%EA%B2%80%EC%82%AC-%EC%97%B0%EC%82%B0%EC%9E%90)
    - [is 키워드](https://github.com/yoojinhee03/TIL/blob/master/Flutter/Dart.md#5-is-%ED%82%A4%EC%9B%8C%EB%93%9C%EB%8D%B0%EC%9D%B4%ED%84%B0-%ED%83%80%EC%9E%85-%EA%B2%80%EC%82%AC)
    - [as 키워드](https://github.com/yoojinhee03/TIL/blob/master/Flutter/Dart.md#6-as-%ED%82%A4%EC%9B%8C%EB%93%9C%EB%8D%B0%EC%9D%B4%ED%84%B0-%ED%83%80%EC%9E%85-%EB%B3%80%ED%99%98)
- [조건 표현식](https://github.com/yoojinhee03/TIL/blob/master/Flutter/Dart.md#8-%EC%A1%B0%EA%B1%B4-%ED%91%9C%ED%98%84%EC%8B%9D)
  - [삼항 연산자](https://github.com/yoojinhee03/TIL/blob/master/Flutter/Dart.md#81-%EC%82%BC%ED%95%AD-%EC%97%B0%EC%82%B0%EC%9E%90)
  - [조건적 멤버 접근 연산자](https://github.com/yoojinhee03/TIL/blob/master/Flutter/Dart.md#82-%EC%A1%B0%EA%B1%B4%EC%A0%81-%EB%A9%A4%EB%B2%84-%EC%A0%91%EA%B7%BC-%EC%97%B0%EC%82%B0%EC%9E%90)
- [캐스케이드 표기법](https://github.com/yoojinhee03/TIL/blob/master/Flutter/Dart.md#9-%EC%BA%90%EC%8A%A4%EC%BC%80%EC%9D%B4%EB%93%9C-%ED%91%9C%EA%B8%B0%EB%B2%95)

## 1. 주석(comment)

`//한 줄 주석`

`/*여러줄 주석*/`

## 2. 타입(type)

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

## 3. 상수

```dart
final int PRICE = 1000;
final NAME = 'kim';//타입 생략 가능
PRICE = 2000;//에러
```

### 3-1. final

**런타임**에 상수화가 된다.

### 3-2. const

**컴파일 시점**에 상수화가 된다.

## 4. 함수

### 4.1 함수

```dart
//매개변수 2개
int f(int x, int y) {
  return x + y;
}

//return X
void f2() {
  print("안녕");
}

void main() {
  print(f(1, 3));
  f2();
}
```

### 4.2 void 생략/$ 기호

```dart
//문자열 내에 변수 삽입 및 {} 수식 표현 가능
void f1(String name) {
  print("안녕 $name");
}

f2(String name) {
  print("안녕~ ${name}");
}

void main() {
  f1("진희");
  f2("길동");
}
```

### 4.3 함수와 클래스 안 메소드

```dart
//메소드
//클래스 내부에 작성하는 함수
class MyClass {
  void f1() {
    print("메서드 입니다");
  }
//static 메소드
//객체 생성 없이 호출 가능
  static void f2() {
    print("static 메서드 입니다");
  }
}
//함수
//클래스 밖에 작성
//어디서나 호출할 수 있음
void f3() {
  print("함수 입니다");
}

void main() {
  MyClass myClass = MyClass();
  myClass.f1();
  MyClass.f2();
  f3();
}
```

### 4.4 람다식

```dart
//dart에서는 람다 표현식이라는 함수 표현 방식을 지원
//함수명([인수명]) => [동작 또는 반환값]
add(a, b) => a + b;

void main() {
  print(add(1, 3));
}
```

### 4.5 선택 매개변수

```dart
//{}로 선택형 매개변수를 만들 수 있다.
something({String name, int age}) {
  print("이름:$name, 나이:$age");
}

void main() {
  something(name: "유진희", age: 18);
  something(name: "유진희");
  something(age: 18);
  something();
}
```

```dart
//default값을 지정할 수 있다,
something({String name, int age = 18}) {
  print("이름:$name, 나이:$age");
}
```

## 5. is 키워드(데이터 타입 검사)

- is 키워드 : 타입이 같으면 **true** 반환/타입이 다르면 **false** 반환
- is! 키워드 : 타입이 같으면 **false** 반환/타입이 다르면 **true** 반환

```dart
var v1 = 10;
if(v1 is int){
    print("v1 is int type");
}else{
    print("v1 is not int type");
}
```

## 6. as 키워드(데이터 타입 변환)

- 데이터 타입을 다른 타입을 변환

- 동일 타입 캐스팅/업 캐스팅 같은 경우 as 키워드 사용이 **적절하지 않음**

```dart
//동일 타입 캐스팅
int a = 10;
int b = a as int;
```

```dart
//업 캐스팅
class Parent{
    int a;
}
class Child extends Parent{
    int b;
}
void main(){
    Child c = Child();
    c.a=1;
    c.b=2;
    
    Parent p=c as Parent;
    //자식 클래스를 부모 클래스에 담는 것은 as 키워드를 사용하지 않더라도 잘 넘어감
    //따라서 굳이 as 키워드를 사용하지 않아도 O
}
```

- 다운 캐스팅 같은 경우 as 키워드 사용이 **적절함**

```dart
//다운 캐스팅
class Parent{
    int a;
}
class Child extends Parent{
    int b;
}
void main(){
    Parent p = Parent();
    p.a=1;
    
    Child c = p as Child;
}
```

```dart
//is 키워드를 이용하여 타입을 확인한 후 형변환
class Parent{
    int a;
}
class Child extends Parent{
    int b;
}
void main(){
    Child c = Child();
    c.a=1;
    c.b=2;
    
    Parent p = c;//업 캐스팅
    
    if(p is Child){
         Child c1 = p as Child;//as 생략 가능
    }
}
```

## 7. 연산자

### 7.1 산술 연산자

- +, -, *, /, ~/, %, ++, --

```dart
void main() {
  print(5 / 2);
  print(5 ~/ 2);//몫
  print(5 % 2);//나머지
}
```

### 7.2 할당 연산자

- =, +=, -=, *=, /=, ~/=

````dart
int a=10;
//a=a+1;
a+=1;
````

### 7.3 관계 연산자

- ==, !=, >, <, >=, <=

### 7.4 비트 & 시프트 연산자

- &(AND), |(OR), ^(XOR), ~(NOT), <<, >>

### 7.5 타입 검사 연산자

[is 키워드](https://github.com/yoojinhee03/TIL/blob/master/Flutter/Dart.md#5-is-%ED%82%A4%EC%9B%8C%EB%93%9C%EB%8D%B0%EC%9D%B4%ED%84%B0-%ED%83%80%EC%9E%85-%EA%B2%80%EC%82%AC)

[as 키워드](https://github.com/yoojinhee03/TIL/blob/master/Flutter/Dart.md#6-as-%ED%82%A4%EC%9B%8C%EB%93%9C%EB%8D%B0%EC%9D%B4%ED%84%B0-%ED%83%80%EC%9E%85-%EB%B3%80%ED%99%98)

## 8. 조건 표현식

### 8.1 삼항 연산자

```dart
int a = 10;
print(a > 5 ? '5보다 크다' : '5보다 작다');
/*
if(a>5){
    print('5보다 크다');
}else{
    print('5보다 작다');
}
*/
```

### 8.2 조건적 멤버 접근 연산자

```dart
//null 체크
class MyClass {
  int age;
}

void main() {
  MyClass myClass = MyClass();
  myClass.age = 18;
  print(myClass?.age);
  /*
  if(myClass.age==null){
      print(null);
  }else{
      print(myClass.age);
  }
  */
}
```

```dart
//null일 경우 처리
class MyClass {
  int age;
}

void main() {
  MyClass myClass = MyClass();
  //myClass.age = 18;
  print(myClass.age ?? 10);
  if(myClass.age==null){
      print(10);
  }else{
      print(myClass.age);
  }
}
```

## 9. 캐스케이드 표기법

```dart
class MyClass {
  int age;
  String name;

  setAge(int age) {
    this.age = age;
  }

  setName(String name) {
    this.name = name;
  }

  showInfo() {
    print('이름:$name, 나이:$age');
  }
}

void main() {
  MyClass myClass = MyClass()
    ..setName("진희")
    ..setAge(18)
    ..showInfo();
}
```

## 10. 조건문

### 10.1 if, if~else

```dart
int a = -1;
if (a > 0) {
    print('양수');
} else if (a == 0) {
    print('0');
} else {
    print('음수');
}
```

### 10.2 switch

```dart
int a = -1;
  switch (a) {
    case -1:
      print('-1');
      break;
    case 0:
      print('0');
      break;
    case 1:
      print('1');
      break;
    default:
      print('-1, 0, 1을 제외한 수');
  }
```

### 10.3 assert

조건식이 거짓이면 에러 발생

```dart
assert(1 < 0);
//error
```

## 11. 반복문

### 11.1 for

```dart
void main() {
  for (int i = 1; i < 5; i++) {
    print(i);
  }
}
```

### 11.2 forEach

```dart
var list = [1, 2, 3, 4];
list.forEach((i) {
    print(i);
});
list.forEach((i) => print(i));
```

### 11.3 for in

```dart
void main() {
  var list = [1, 2, 3, 4];
  for (int i in list) {
    print(i);
  }
}
```

### 11.4 while

```dart
void main() {
  int i = 1;
  while (i < 5) {
    print(i);
    i++;
  }
}
```

### 11.5 do-while

```dart
void main() {
  int i = 1;

  do {
    print(i);
    i++;
  } while (i < 5);
}
```



