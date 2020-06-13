## select 구문

* 필요한 자료를 DB에 검색

* 튜플(tuple) 연산

  * 각각의 레코드에 대해서 1줄마다 처리

* SELECT [DISTINCT]{ * | column명 | 표현식 [별칭] } 

  FROM 테이블명

  [WHERE 검색조건]

  [GROUP BY column | 표현식]

  [HAVING 검색조건]

  [ORDER BY {속성} [ASC | DESC]];



## 산술식

* 종류 : +, -, *, /
* FROM 절을 제외한 모든 절에서 산술 연산자 사용 가능

```SQL
SELECT salary, 2*(salary+100) FROM employees; 
```



## NULL

* 한 행의 특정 컬럼에 데이터 값이 지정되지 않을 때의 값
* **알 수 없는 값**으로 0 또는 공백과는 다름
* NULL 값을 포함하는 연산의 경우 결과 값는 NULL
  * NULL + 0 = NULL / NULL * 1 = NULL
* 길이는 0



## NVL(attribute, replace_with)

* attribute
  * 해당 attribute(column)
* replace_with
  * NULL 일 경우의 대체값

```sql
SELECT salary,NVL(salary,0) FROM employees WHERE salary IS NULL;
```



## 표현식

* 질의의 결과를 표시할 때 일반적으로 선택한 컬럼의 이름을 HEADING으로 사용
* 속성에 별칭 부여(ALIAS)
  * 속성의 이름을 변환
  * 공백 or 특수문자 or 대소문자를 구분할 경우 **" "**로 별칭을 감싼다.

```sql
SELECT salary as 급여 FROM employees;
SELECT salary as "급여" FROM employees;
SELECT salary 급여 FROM employees;
SELECT salary "급여" FROM employees;
```



## 연결(Concatenation) 연산자

* 열(column), 산술 계산식, 상수값 또는 문자열을 연결할 때 사용한다.

* **||**기호 사용
* 문자열 literal을 사용하는 경우 ‘literal’ 기호 사용 
* 문자열에 null 값을 결합할 경우 결과는 문자열

```sql
SELECT last_name||first_name FROM employees;
```



## Literal 문자열

* 열 이름이나 열 별칭을 제외한 SELECT 목록에 포함된 **문자**, **숫자**, 또는 **날짜** 등의 상수
* 질의 결과에 포함되어 SELECT 목록의 열과 동일하게 취급
* 날짜 및 문자 리터럴은 밤드시 작은 따옴표(**' '**)로 묶는다.
* 숫자 리터럴은 작은 따옴표(**' '**)로 묶지 않아도 된다.

```sql
SELECT last_name||' first_name is '||first_name FROM employees;
```



## DISTINCT

* 중복값 제거

```sql
SELECT DISTINCT job_id FROM employees;
--job_id 중복 X
```



## WHERE

* 만족해야 할 조건을 기술
* WHERE 절에서는 별칭을 사용할 수 없다.

```sql
SELECT * FROM employees WHERE salary>1000;
```



### 비교 연산자

#### 단순 비교연산자

* 같다(=), 다르다(<>, !=, ^=), 부등호(>, <, >=, <=)

```sql
SELECT job_id FROM employees WHERE job_id='SH_CLERK';
```

#### BETWEEN a AND b

* a 이상 b 이하의 데이터 출력

```sql
SELECT salary FROM employees WHERE salary BETWEEN 3000 AND 5000;
--3000이상 5000이하인 salary만 출력
```

#### NOT BETWEEN a AND  b

* a와 b사이에 있지 않은 데이터 출력(a, b값 포함하지 않음)

```sql
SELECT salary FROM employees WHERE salary NOT BETWEEN 5000 AND 3400;
--3400미만, 5000초과인 salary만 출력
```

#### IN(list)

* list의 여러 값 중 어느 하나와 일치하는 데이터 출력

```sql
SELECT job_id FROM employees WHERE job_id IN('SH_CLERK','AC_ACCOUNT','AD_ASST');
--job_id가 SH_CLERK,AC_ACCOUNT,AD_ASST 중에 하나라도 포함되는 job_id 출력
```

#### NOT IN(list)

* list의 값과 일치하지 않는 데이터 출력

```sql
SELECT job_id FROM employees WHERE job_id NOT IN('SH_CLERK','AC_ACCOUNT','AD_ASST');
--job_id가 SH_CLERK,AC_ACCOUNT,AD_ASST가 아닌 job_id 출력
```

#### LIKE

* 문자 형태로 일치하는 데이터 출력
* 특정 패턴에 속하는 값을 조회하고자 하는 경우 사용
* %  :  0개 / 1개 이상의 문자와 대응
* _ : 한개의 문자와 대응

```sql
SELECT first_name FROM employees WHERE first_name LIKE '_O%';
-- 두번째 글짜가 O인 first_name 출력
```

```sql
SELECT first_name FROM employees WHERE first_name LIKE '%@%%' ESCAPE '@';
--%가 포함된 first_name 출력
```

#### NOT LIKE

* 문자 형태와 일치하지 않는 데이터 출력

```sql
SELECT first_name FROM employees WHERE first_name NOT LIKE '%A%';
--A가 포함되지 않는 first_name 출력
```

#### IS NULL

* NUL값을 가진 데이터 출력

```sql
SELECT salary FROM employees WHERE salary IS NULL;
--NULL값을 가진 salary 출력
```

#### IS NOT NULL

* NULL 값을 갖지 않는 데이터 출력

```sql
SELECT salary FROM employees WHERE salary IS NOT NULL;
--NULL값을 가지지 않는 salary 출력
```



### 논리 연산자

* 우선순위
  *  NOT>AND>OR

| 연산자 | 설명                                    |
| :----- | :-------------------------------------- |
| AND    | 양쪽 조건이 모두 true이면 true 반환     |
| OR     | 양쪽 조건 중 하나만 true이면 true 반환  |
| NOT    | 뒤따르는 조건이 false 인 경우 true 반환 |

```sql
SELECT salary FROM employees WHERE NOT(salary >=3000 AND salary<=7000);
SELECT salary FROM employees WHERE NOT salary >=3000 OR NOT salary<=7000;
SELECT salary FROM employees WHERE salary <3000 OR salary>7000;
SELECT salary FROM employees WHERE salary NOT BETWEEN 3000 AND 7000;
--결과 동일
```



## 데이터 정렬

* ORDER BY 절은 특정 column을 기준으로 정렬하여 출력
* column 명 대신 SELECT 절에서 사용한 ALIAS 명이나 column 순서를 나타내는 정수 사용 가능
* 정렬 방식을 지정하지 않으면 ASC(오름차순) 적용
* ASC(오름차순) / DESC(내림차순)
* 각 열마다 오름차순, 내림차순을 개별적으로 지정 가능
* DISTINCT 키워드를 사용했다면, ORDER BY 절의 컬럼은 SELECT 절에서 사용한 컬럼만 지정 가능
* DISTINCT 키워드를 사용하지 않았다면, ORDER BY 절의 컬럼은 SELECT 절에 없는 컬럼 기준으로 정렬 가능

```sql
SELECT salary FROM employees ORDER BY salary DESC,first_name;
SELECT DISTINCT job_id FROM employees ORDER BY job_id;
```