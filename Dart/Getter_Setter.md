## Getter와 Setter

멤버 변수를 public으로 선언하게 될 경우, 정보를 유출될 가능성이 높아진다.

따라서 **정보 은닉**을 통해 정보 유출을 방지한다. **정보 은닉**은 캡슐화를 통해서 이루어진다.

멤버 변수에 접근할 수 있는 메서드를 만들면 된다. 즉, 멤버 변수를 **private**로 선언하고 변수에 접근할 수 있는 메서드는 **public**으로 선언하면 멤버 변수에 직접 접근하는 것을 막을 수 있다.

이렇게 변수에 접근할 수 있는 메서드를 Getter와 Setter라고 한다.

```dart
class Person{
    String _id;
    String get id => _id;
    set id(String id) => _id=id;
}
```

Getter는 멤버 변수의 값을 가져오는 역할을, Setter는 값을 삽입하는 역할을 한다.

```dart
class Person{
    String _id;
    String get id => _id;
    set id(String id) => _id=id;
}
main(){
    Person p=Person();
    p.id="1234";
    print(p.id);
}
```

