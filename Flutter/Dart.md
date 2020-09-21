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

#### 4.1 함수

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

#### 4.2 void 생략/$ 기호

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

#### 4.3 함수와 클래스 안 메소드

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

#### 4.4 람다식

```dart
//dart에서는 람다 표현식이라는 함수 표현 방식을 지원
//함수명([인수명]) => [동작 또는 반환값]
add(a, b) => a + b;

void main() {
  print(add(1, 3));
}
```

#### 4.5 선택 매개변수

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



### 5. is 키워드(데이터 타입 검사)

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



### 6. as 키워드(데이터 타입 변환)

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

