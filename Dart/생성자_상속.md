- [클래스](https://github.com/yoojinhee03/TIL/blob/master/Flutter/Dart(%EC%83%9D%EC%84%B1%EC%9E%90%2C%EC%83%81%EC%86%8D).md#%ED%81%B4%EB%9E%98%EC%8A%A4)
- [생성자](https://github.com/yoojinhee03/TIL/blob/master/Flutter/Dart(%EC%83%9D%EC%84%B1%EC%9E%90%2C%EC%83%81%EC%86%8D).md#%EC%83%9D%EC%84%B1%EC%9E%90)
  - [기본 생성자](https://github.com/yoojinhee03/TIL/blob/master/Flutter/Dart(%EC%83%9D%EC%84%B1%EC%9E%90%2C%EC%83%81%EC%86%8D).md#%EA%B8%B0%EB%B3%B8-%EC%83%9D%EC%84%B1%EC%9E%90)
  - [이름 있는 생성자](https://github.com/yoojinhee03/TIL/blob/master/Flutter/Dart(%EC%83%9D%EC%84%B1%EC%9E%90%2C%EC%83%81%EC%86%8D).md#%EC%9D%B4%EB%A6%84-%EC%9E%88%EB%8A%94-%EC%83%9D%EC%84%B1%EC%9E%90)
  - [초기화 리스트](https://github.com/yoojinhee03/TIL/blob/master/Flutter/Dart(%EC%83%9D%EC%84%B1%EC%9E%90%2C%EC%83%81%EC%86%8D).md#%EC%B4%88%EA%B8%B0%ED%99%94-%EB%A6%AC%EC%8A%A4%ED%8A%B8)
  - [리다이렉팅 생성자](https://github.com/yoojinhee03/TIL/blob/master/Flutter/Dart(%EC%83%9D%EC%84%B1%EC%9E%90%2C%EC%83%81%EC%86%8D).md#%EB%A6%AC%EB%8B%A4%EC%9D%B4%EB%A0%89%ED%8C%85-%EC%83%9D%EC%84%B1%EC%9E%90)
  - [상수 생성자](https://github.com/yoojinhee03/TIL/blob/master/Flutter/Dart(%EC%83%9D%EC%84%B1%EC%9E%90%2C%EC%83%81%EC%86%8D).md#%EC%83%81%EC%88%98-%EC%83%9D%EC%84%B1%EC%9E%90)
  - [팩토리 생성자](https://github.com/yoojinhee03/TIL/blob/master/Flutter/Dart(%EC%83%9D%EC%84%B1%EC%9E%90%2C%EC%83%81%EC%86%8D).md#%ED%8C%A9%ED%86%A0%EB%A6%AC-%EC%83%9D%EC%84%B1%EC%9E%90)

- [상속](https://github.com/yoojinhee03/TIL/blob/master/Flutter/Dart(%EC%83%9D%EC%84%B1%EC%9E%90%2C%EC%83%81%EC%86%8D).md#%EC%83%81%EC%86%8D)

## 클래스

```dart
class Parent{
	String name;
	setName(String name){
		this.name=name;
	}
    getName(){
        return name;
    }
}
```

클래스를 사용하기 위해서는 객체를 생성해야 한다.

```dart
void main(){
	Parent p=Parent();
    var p1=Parent();//var로 선언 가능
    p.setName("진희");
    print(p.getName());
}
```

## 생성자

### 기본 생성자

클래스를 구현할 때 생성자를 선언하지 않으면 기본 생성자가 자동으로 생성된다.

이름 없는 생성자는 하나만 생성 가능하다. 이름 없는 생성자를 2개 이상 선언했을 경우 중복 선언 에러가 발생한다.

```dart
class Parent{
    Parent(){}//기본생성자
}
class Parent{
	Parent p = Parent();
}
```

### 이름 있는 생성자

생성자에 이름을 부여한 형태이다.

이름 있는 생성자를 선언하면 기본 생성자는 생략할 수 없다.

```dart
class Parent{
    Parent.init(){}
}
void main() {
  Parent p = Parent.init();
}
```

### 초기화 리스트

생성자의 구현부가 실행되기 전에 인스턴스 변수를 초기화할 수 있다.

```dart
class Parent {
  String name;
  Parent() : name = '진희' {
    print('name : $name');
  }
}
void main() {
  Parent p = Parent();
}
```

### 리다이렉팅 생성자

메인 생성자에게 위임하는 역할

```dart
class Parent {
  String name;
  int age;
  Parent(String name, int age) {
    print('name : $name, age : $age');
  }
  Parent.init(String name) : this(name, 18);
}

void main() {
  Parent p = Parent.init('진희');
}
```

### 상수 생성자

생성자를 상수처럼 만들어준다. 

즉, 해당 클래스가 상수처럼 변하지 않는 객체를 생성한다.

인스턴스 변수는 모두 final, 생성자는 const 키워드가 붙어야 한다.

```dart
class Parent {
  final String name;
  const Parent(this.name);
}

void main() {
  Parent p = const Parent('kim');
  Parent p1 = const Parent('kim');
  Parent p2 = Parent('kim');
  Parent p3 = Parent('kim');

  print(identical(p, p1));//true
  print(identical(p2, p3));//false
}
```

p와 p1은 상수 생성자를 참조하고 있다. 따라서 동일한 인스턴스를 참조하고 있다. 그러나 p2와 p3는 새로운 인스턴스를 생성했기 때문에 동일한 인스턴스를 가지지 않는다.

### 팩토리 생성자

[팩토리 패턴 참고](https://woovictory.github.io/2019/02/07/Design-Pattern-Factory-Pattern/)

```dart
import 'dart:io';

class Parent {
  Parent.init();

  factory Parent(String type) {
    switch (type) {
      case 'Child':
        return Child();
    }
  }

  String getType() {
    return 'Parent';
  }
}

class Child extends Parent {
  Child() : super.init();

  @override
  String getType() {
    return 'Child';
  }
}

void main() {
  Parent c = Parent('Child');

  print(c.getType());
}
```

## 상속

```dart
class Parent {
  String name;

  showInfo() {
    print('name is $name');
  }
}

class Child extends Parent {
  int num;

  @override
  showInfo() {
    print('name is $name and num is $num');
  }
}

main() {
  Child c = Child();
  c.name = '진희';
  c.num = 2;
  c.showInfo();
}
```

상속받는 쪽은 extends 키워드를 통해서 상속받고자하는 부모 클래스를 지정한다.

`@override`어노테이션은 부모 클래스의 메서드를 재정의하고 싶을 때 사용한다.