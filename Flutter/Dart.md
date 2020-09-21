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

