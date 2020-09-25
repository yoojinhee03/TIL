- [함수](https://github.com/yoojinhee03/TIL/blob/master/Flutter/Dart(%ED%95%A8%EC%88%98).md#%ED%95%A8%EC%88%98)
  - [void 생략/$ 기호](https://github.com/yoojinhee03/TIL/blob/master/Flutter/Dart(%ED%95%A8%EC%88%98).md#void-%EC%83%9D%EB%9E%B5-%EA%B8%B0%ED%98%B8)
  - [함수와 클래스 안 메소드](https://github.com/yoojinhee03/TIL/blob/master/Flutter/Dart(%ED%95%A8%EC%88%98).md#%ED%95%A8%EC%88%98%EC%99%80-%ED%81%B4%EB%9E%98%EC%8A%A4-%EC%95%88-%EB%A9%94%EC%86%8C%EB%93%9C)
  - [람다식](https://github.com/yoojinhee03/TIL/blob/master/Flutter/Dart(%ED%95%A8%EC%88%98).md#%EB%9E%8C%EB%8B%A4%EC%8B%9D)
  - [선택 매개변수](https://github.com/yoojinhee03/TIL/blob/master/Flutter/Dart(%ED%95%A8%EC%88%98).md#%EC%84%A0%ED%83%9D-%EB%A7%A4%EA%B0%9C%EB%B3%80%EC%88%98)

## 함수

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

### void 생략/$ 기호

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

### 함수와 클래스 안 메소드

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

### 람다식

```dart
//dart에서는 람다 표현식이라는 함수 표현 방식을 지원
//함수명([인수명]) => [동작 또는 반환값]
add(a, b) => a + b;

void main() {
  print(add(1, 3));
}
```

### 선택 매개변수

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

