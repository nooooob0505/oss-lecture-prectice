# oss-lecture-prectice
oss lecture prectice
This is a space where Park Joo-hyun of Chosun University practices opensource and git
>The beginning is *incomplete*, but the end **will be great.**
***
# From here, it is about the class assignment.
>I will summarize the contents of top,ps,jobs and kill in linux (in KOREAN)
***
**1. ps(Process Status)**

현재 시스템에서 실행 중인 프로세스의 스냅샷 상태를 확인하는 명령어

|옵션 |설명 |
|:--:|:--:|
|-e|현재 시스템에서 실행중인 **모든** 프로세스 출력|
|-f|**full format**으로 프로세스 상세 정보 출력(UID,PID,PPID 포함)|
|aux| BSD문법으로 모든 프로세스를 출력하며 **CPU,메모리** 점유율도 표시|

ex)

```bash
$ ps -ef
# 모든 프로세스를 상세정보랑 같이 출력 (system V 스타일)
## -ef와 같이 -로 옵션 추가

$ ps aux
# CPU 및 메모리 사용량 포함하여 출력 (BSD 스타일)
## aux처럼 -없이 옵션 추가

$ ps -ef | grep python
# 특정 프로세스(python)만 검색
```
* UID: 프로세스 ID
* PID: 프로세스 ID
* PPID: 부모 프로세스 ID
* CMD: 실행된 명령어 이름

**2. top**

시스템의 프로세스 상태를 *실시간*으로 갱신하여 보여주는 작업 관리자

2-1 화면 구성 요소
+ 시스템 요약: 가동시간,사용자 수, 로드 에버리지
+ Task 상태: 전체, 실행중, 슬립, 정지, 좀비 프로세스 개수
+ CPU/Memory: CPU사용률, 메모리 및 스왑 사용량
  
2-2 실행 화면 예시
<img width="1581" height="955" alt="스크린샷 2025-11-29 205258" src="https://github.com/user-attachments/assets/dbdba0d6-045c-4859-862e-db1aaf169693" />


2-3 주요 단축키
- q: top 종료
- k: 특정 프로세스 종료 (PID입력 필요)
- c: 명령어를 전체경로(Full path)로 표시
- P: CPU 사용량 순으로 정렬 (기본값)
- M: 메모리 사용량 순으로 정렬
- 1: CPU 코어별 사용량 확인

```bash
# 특정 프로세스(예: python)만 검색
$ ps -ef | grep python
```

**3. jobs**

현재 쉘 세션에서 *백그라운드*로 실행 중이거나 *중지*된 작업의 목록을 출력

3.1 작업(job)의 개념
* foreground: 터미널을 점유하며 실행되는 상태.
* background: 터미널을 점유하지 않고 뒤에서 실행되는 상태 ( 명령어 뒤에 &를 붙여 실행)

3-2 예시 코드

```bash
$ sleep 100 &       # 백그라운드로 100초 대기 명령 실행
[1] 12345           # [Job ID] PID 출력

$ jobs              # 작업 목록 확인
[1]+  Running                 sleep 100 &
```

상태값 (status)
+ Running: 실행 중
+ Stopped: 일시 중지됨(보통 Ctrl + z 입력 시)
+ Done: 작업 완료
+ Terminated: 강제 종료됨

**4. kill**

특정 프로게스에 *시그널*을 보내 제어하는 명령어. 주로 프로세스 종료시킬 때 사용하지만 종료 외에도 다양한 신호 가능

4-1 기본 문법
```bash
kill [옵션/시그널] [PID]
```

4-2 주요 시그널 종류

| 옵션 | 시그널 명 | 설명 |
|:--:|:--:|:--:|
| -15 | SIGTERM | 프로세스에게 종료를 요청. 정상 종료 절차를 밟음. |
| -9 | SIGKILL | 프로세스를 강제 종료. 저장되지 않은 데이터는 유실 가능. |
| -2 | SIGINT | 키보드 인터럽트(Ctrl + C)와 동일한 효과. |
| -1 | SIGHUP | 프로세스를 재시작하거나 설정 파일을 다시 읽어옴. |

```bash
# PID가 1234인 프로세스 정상 종료 요청
$ kill 1234

# PID가 1234인 프로세스 강제 종료
$ kill -9 1234
```





   
