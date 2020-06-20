> 참고자료 : [노마드 코더 python](https://academy.nomadcoders.co/courses/enrolled/681401)



## Sequence Types

### List

```python
days=["Mon","Tue","Wed","Thur","Fri"]
```

* Mutable Sequence Types
  * 값을 변경할 수 있다.
* Common Sequence Operations

### Tuple

```python
days=("Mon","Tue","Wed","Thur","Fri")
```

* Immutable Sequence Types
  * 값을 변경할 수 없다.
* Common Sequence Operations



## Mapping Type

### dict

```python
info={
	"name":"jinhee",
	"age":18,
	"korean":True,
	"fav_food":["Kimchi","bulgogi"]
}
print(info["fav_food"][0])
```

* dictionary 안에 list, tuple 등을 저장할 수 있다.



## Function

```python
def say_hello(name="name"):
  print("hello", name)

say_hello()
say_hello("jinhee")
```

* (definiton 혹은 define의 약자) def를 쓴 이후에 function의 이름을 정의
* 들여쓰기로 function의 body를 구분
* 인자에 default value를 추가 할 수 O

```python
def plus(a,b):
  return a+b
  
result=plus(a,b)
print(result)
```

* return 하는 즉시 함수 종료

```python
def say_hello(name, age):
  return f"Hello {name} you are {age} years old"

result=say_hello(age=18,name="jinhee")
print(result)
```

* keyword argument
  * 인자의 위치에 상관없이 인자의 이름에 따라 결정할 수 있다.
  * function(key2="value", key1="value")
* f-string
  * string안에 변수를 포함할 수 있다.
  * **f** "Hello {key}"



## 조건문 / 논리 연산 / 비교

```python
def age_chk(age):
  print(f"네 나이는 {age}")
  if age >= 20 and age < 30:
    print("20대")
  elif age == 19:
    print("내년에 성인")
  else:
    print("청소년")

age_chk(25);
```

* 조건문
  * if / elif / else
* 논리 연산
  * and / or / not
* 비교
  * < / <= /  > / >= / == / != / is / is not



## 반복문

```python
days=("Mon","Tue","Wed","Thur","Fri")
for day in days:
  if day == "Wed":
    break
  else:
    print(day)
```

* sequence(such as a string, tuple or list) 사용 가능



## module

##### main.py

```python
from math import ceil, fabs
from calculator import plus

print(ceil(2.3))
print(fabs(-1.2))
print(plus(1,2))
```

##### calculator.py

```python
def plus(a,b):
  return a+b
```

* 파이썬을 설치할 때 기본적으로 제공 / 직접 구현
  * 파이썬 확장자 .py로 만든 파이썬 파일은 모두 모듈이다.
  * from 모듈명 import 모듈함수