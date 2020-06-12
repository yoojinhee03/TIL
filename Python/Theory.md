> 참고자료 : [노마드 코더 python](https://academy.nomadcoders.co/courses/enrolled/681401)

## python 문법

## Sequence Types

[참고자료](https://docs.python.org/3/library/stdtypes.html#sequence-types-list-tuple-range)

### [List](https://docs.python.org/3/library/stdtypes.html#list)

```python
days=["Mon","Tue","Wed","Thur","Fri"]
```

* [Mutable Sequence Types](https://docs.python.org/3/library/stdtypes.html#mutable-sequence-types)
  * 값을 변경할 수 있다.
* [Common Sequence Operations](https://docs.python.org/3/library/stdtypes.html#typesseq-common)

### [Tuple](https://docs.python.org/3/library/stdtypes.html#tuple)

```python
days=()"Mon","Tue","Wed","Thur","Fri")
```

* Immutable Sequence Types
  * 값을 변경할 수 없다.
* [Common Sequence Operations](https://docs.python.org/3/library/stdtypes.html#typesseq-common)

## Mapping Type

[참고자료](https://docs.python.org/3/library/stdtypes.html#mapping-types-dict)

### [dict](https://docs.python.org/3/library/stdtypes.html#dict)

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





