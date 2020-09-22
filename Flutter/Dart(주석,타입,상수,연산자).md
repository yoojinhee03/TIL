- [주석(comment)](https://github.com/yoojinhee03/TIL/blob/master/Flutter/Dart(%EC%A3%BC%EC%84%9D%2C%ED%83%80%EC%9E%85%2C%EC%83%81%EC%88%98%2C%EC%97%B0%EC%82%B0%EC%9E%90).md#1-%EC%A3%BC%EC%84%9Dcomment)
- [타입(type)](https://github.com/yoojinhee03/TIL/blob/master/Flutter/Dart(%EC%A3%BC%EC%84%9D%2C%ED%83%80%EC%9E%85%2C%EC%83%81%EC%88%98%2C%EC%97%B0%EC%82%B0%EC%9E%90).md#2-%ED%83%80%EC%9E%85type)
- [상수](https://github.com/yoojinhee03/TIL/blob/master/Flutter/Dart(%EC%A3%BC%EC%84%9D%2C%ED%83%80%EC%9E%85%2C%EC%83%81%EC%88%98%2C%EC%97%B0%EC%82%B0%EC%9E%90).md#3-%EC%83%81%EC%88%98)
- [연산자](https://github.com/yoojinhee03/TIL/blob/master/Flutter/Dart(%EC%A3%BC%EC%84%9D%2C%ED%83%80%EC%9E%85%2C%EC%83%81%EC%88%98%2C%EC%97%B0%EC%82%B0%EC%9E%90).md#4-%EC%97%B0%EC%82%B0%EC%9E%90)
  - [산술 연산자](https://github.com/yoojinhee03/TIL/blob/master/Flutter/Dart(%EC%A3%BC%EC%84%9D%2C%ED%83%80%EC%9E%85%2C%EC%83%81%EC%88%98%2C%EC%97%B0%EC%82%B0%EC%9E%90).md#41-%EC%82%B0%EC%88%A0-%EC%97%B0%EC%82%B0%EC%9E%90)
  - [할당 연산자](https://github.com/yoojinhee03/TIL/blob/master/Flutter/Dart(%EC%A3%BC%EC%84%9D%2C%ED%83%80%EC%9E%85%2C%EC%83%81%EC%88%98%2C%EC%97%B0%EC%82%B0%EC%9E%90).md#42-%ED%95%A0%EB%8B%B9-%EC%97%B0%EC%82%B0%EC%9E%90)
  - [관계 연산자](https://github.com/yoojinhee03/TIL/blob/master/Flutter/Dart(%EC%A3%BC%EC%84%9D%2C%ED%83%80%EC%9E%85%2C%EC%83%81%EC%88%98%2C%EC%97%B0%EC%82%B0%EC%9E%90).md#43-%EA%B4%80%EA%B3%84-%EC%97%B0%EC%82%B0%EC%9E%90)
  - [비트 & 시프트 연산자](https://github.com/yoojinhee03/TIL/blob/master/Flutter/Dart(%EC%A3%BC%EC%84%9D%2C%ED%83%80%EC%9E%85%2C%EC%83%81%EC%88%98%2C%EC%97%B0%EC%82%B0%EC%9E%90).md#44-%EB%B9%84%ED%8A%B8--%EC%8B%9C%ED%94%84%ED%8A%B8-%EC%97%B0%EC%82%B0%EC%9E%90)
  - [타입 검사 연산자](https://github.com/yoojinhee03/TIL/blob/master/Flutter/Dart(%EC%A3%BC%EC%84%9D%2C%ED%83%80%EC%9E%85%2C%EC%83%81%EC%88%98%2C%EC%97%B0%EC%82%B0%EC%9E%90).md#45-%ED%83%80%EC%9E%85-%EA%B2%80%EC%82%AC-%EC%97%B0%EC%82%B0%EC%9E%90)
    - [is 키워드](https://github.com/yoojinhee03/TIL/blob/master/Flutter/Dart(%EC%A3%BC%EC%84%9D%2C%ED%83%80%EC%9E%85%2C%EC%83%81%EC%88%98%2C%EC%97%B0%EC%82%B0%EC%9E%90).md#451-is-%ED%82%A4%EC%9B%8C%EB%93%9C%EB%8D%B0%EC%9D%B4%ED%84%B0-%ED%83%80%EC%9E%85-%EA%B2%80%EC%82%AC)
    - [as 키워드](https://github.com/yoojinhee03/TIL/blob/master/Flutter/Dart(%EC%A3%BC%EC%84%9D%2C%ED%83%80%EC%9E%85%2C%EC%83%81%EC%88%98%2C%EC%97%B0%EC%82%B0%EC%9E%90).md#452-as-%ED%82%A4%EC%9B%8C%EB%93%9C%EB%8D%B0%EC%9D%B4%ED%84%B0-%ED%83%80%EC%9E%85-%EB%B3%80%ED%99%98)



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

## 4. 연산자

### 4.1 산술 연산자

- +, -, *, /, ~/, %, ++, --

```dart
void main() {
  print(5 / 2);
  print(5 ~/ 2);//몫
  print(5 % 2);//나머지
}
```

### 4.2 할당 연산자

- =, +=, -=, *=, /=, ~/=

````dart
int a=10;
//a=a+1;
a+=1;
````

### 4.3 관계 연산자

- ==, !=, >, <, >=, <=

### 4.4 비트 & 시프트 연산자

- &(AND), |(OR), ^(XOR), ~(NOT), <<, >>

### 4.5 타입 검사 연산자

#### 4.5.1 is 키워드(데이터 타입 검사)

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

#### 4.5.2 as 키워드(데이터 타입 변환)

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

