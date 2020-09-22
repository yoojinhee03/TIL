- [조건문](https://github.com/yoojinhee03/TIL/blob/master/Flutter/Dart.md#10-%EC%A1%B0%EA%B1%B4%EB%AC%B8)
  - [if, if~else](https://github.com/yoojinhee03/TIL/blob/master/Flutter/Dart.md#101-if-ifelse)
  - [switch](https://github.com/yoojinhee03/TIL/blob/master/Flutter/Dart.md#102-switch)
  - [assert](https://github.com/yoojinhee03/TIL/blob/master/Flutter/Dart.md#103-assert)
- [반복문](https://github.com/yoojinhee03/TIL/blob/master/Flutter/Dart.md#11-%EB%B0%98%EB%B3%B5%EB%AC%B8)
  - [for](https://github.com/yoojinhee03/TIL/blob/master/Flutter/Dart.md#111-for)
  - [forEach](https://github.com/yoojinhee03/TIL/blob/master/Flutter/Dart.md#112-foreach)
  - [for in](https://github.com/yoojinhee03/TIL/blob/master/Flutter/Dart.md#113-for-in)
  - [while](https://github.com/yoojinhee03/TIL/blob/master/Flutter/Dart.md#114-while)
  - [do-while](https://github.com/yoojinhee03/TIL/blob/master/Flutter/Dart.md#115-do-while)

## 조건문

###  if, if~else

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

### switch

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

### assert

조건식이 거짓이면 에러 발생

```dart
assert(1 < 0);
//error
```

## 반복문

### for

```dart
void main() {
  for (int i = 1; i < 5; i++) {
    print(i);
  }
}
```

### forEach

```dart
var list = [1, 2, 3, 4];
list.forEach((i) {
    print(i);
});
list.forEach((i) => print(i));
```

### for in

```dart
void main() {
  var list = [1, 2, 3, 4];
  for (int i in list) {
    print(i);
  }
}
```

### while

```dart
void main() {
  int i = 1;
  while (i < 5) {
    print(i);
    i++;
  }
}
```

### do-while

```dart
void main() {
  int i = 1;

  do {
    print(i);
    i++;
  } while (i < 5);
}
```

