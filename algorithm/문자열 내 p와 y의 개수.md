### 문자열 내 p와 y의 개수



> https://programmers.co.kr/learn/courses/30/lessons/12916



| s         | answer |
| --------- | ------ |
| "pPoooyY" | true   |
| "Pyy"     | false  |



#### 나의 풀이

```java
class Solution {
    boolean solution(String s) {

        s=s.toUpperCase();
		int count=0;
		
		for(int i=0; i<s.length();i++) {
			if(s.charAt(i)=='P') {
				count++;
			}else if(s.charAt(i)=='Y'){
				count--;
			}
		}
		if(count==0) {
			return true;
		}else {
			return false;
		}
        //return count==0; 해줘도 됨
    }
}
```



#### 다른 풀이

```java
class Solution {
    boolean solution(String s) {
        s = s.toUpperCase();

        return s.chars().filter( e -> 'P'== e).count() == s.chars().filter( e -> 'Y'== e).count();
    }
}
```


