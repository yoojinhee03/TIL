## DoS (Denial of Service)

* 서비스 거부 공격
* 특정한 네트워크나 웹 리소스에 합법적인 유저가 접근하지 못하도록 방해하는 것



### 시스템 자원 고갈 공격



#### 디스크 자원 고갈 공격

* 

#### 리눅스 시스템에서 컴파일

**df-h**명령어로 디스크 저장공간 확인하기

```c
// /root/tempfile 을 '0777' 권한으로 생성 후 무한 루프 조건에서 1000바이트씩 계속해서 써 나가는 프로그램
#include<unistd.h>
#include<sys/file.h>
#define DATA_SIZE 1000

main(){
	int fd;
	char buf[DATA_SIZE];
	fd = creat("/root/tempfile",0777);
	while(1) write(fd, buf, sizeof((buf));
}
```

vi disk.c ➜ i ➜ 입력 ➜ esc ➜ shift + : ➜ wq ➜ gcc disk.c ➜ ./a.out



#### 메모리 자원 고갈 공격

* 디스크 고갈 공격보다 시스템 자원을 더 많이 차지

#### 리눅스 시스템에서 컴파일

**cat /proc/meminfo**명령어로 시스템의 메모리 상태 확인하기

```c
// malloc(메모리 동적 할당, memory allocation) 함수를 통해 메모리 할당만 계속해서 수행하는 프로그램
#include <stdio.h>
#include <stdilib.h>
#define BUFFER_SIZE 1000

main(){
    char *m;
    while(1)
        m=malloc(BUFFER_SIZE);
}
```

vi memory.c ➜ i ➜ 입력 ➜ esc ➜ shift + : ➜ wq ➜ gcc memory.c ➜ ./a.out

<!--

실행파일

df -h

gcc -o disk disk.c / disk라는 이름으로 오브젝트 생성

rm disk

gcc -o disk.out disk.c







cat /proc/meminfo



logical error

퍼미션 허가

drwx|rwx|rwx

directory/읽기/쓰기/실행

directory/read/write/excute

소유자|그룹사용자|일반사용자



ex)

-rwx|--r|rw-

7|1|6



DDoS Attack

분산 공격



파일의 퍼미션

rwx

2의 2승 2의 1승 2의 0승 => 7

소유자/그룹사용자/일반사용자

-->



