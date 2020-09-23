

- [조건 표현식](https://github.com/yoojinhee03/TIL/blob/master/Flutter/Dart.md#8-%EC%A1%B0%EA%B1%B4-%ED%91%9C%ED%98%84%EC%8B%9D)
  - [삼항 연산자](https://github.com/yoojinhee03/TIL/blob/master/Flutter/Dart.md#81-%EC%82%BC%ED%95%AD-%EC%97%B0%EC%82%B0%EC%9E%90)
  - [조건적 멤버 접근 연산자](https://github.com/yoojinhee03/TIL/blob/master/Flutter/Dart.md#82-%EC%A1%B0%EA%B1%B4%EC%A0%81-%EB%A9%A4%EB%B2%84-%EC%A0%91%EA%B7%BC-%EC%97%B0%EC%82%B0%EC%9E%90)
- [캐스케이드 표기법](https://github.com/yoojinhee03/TIL/blob/master/Flutter/Dart.md#9-%EC%BA%90%EC%8A%A4%EC%BC%80%EC%9D%B4%EB%93%9C-%ED%91%9C%EA%B8%B0%EB%B2%95)

## 조건 표현식

### 삼항 연산자

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

### 조건적 멤버 접근 연산자

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

## 캐스케이드 표기법

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

