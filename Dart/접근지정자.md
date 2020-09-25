## 접근 지정자

### 추상화

공통된 데이터와 메서드를 묶어서 클래스명을 부여하는 것을 말한다.

```dart
class Person{
    String name;
    int age;
    sleep(){}
}
```

### 캡슐화

하나의 기능을 수행하는 객체를 만드는 것을 말한다.

```dart
class Person(){
    String name;
    ing age;
    sleep(){print('!!sleep!!')}
}
```

### 접근 지정자

다트의 접근 지정자는 private과 public 두가지이다.

|         | 범위       | 표현                          |
| ------- | ---------- | ----------------------------- |
| private | 라이브러리 | 키워드 X                      |
| public  | 제한 X     | 변수나 메서드 앞에 _ 붙여야함 |

name과 eat()은 public / id와 run()은 private이다.

```dart
class Person{
    String name;
    String _id;
    
    eat(){}
    _run(){}
}
```

