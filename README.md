# oss-lecture-prectice
oss lecture prectice

---
This is a space where Park Joo-hyun of Chosun University practices opensource and git
---
>The beginning is *incomplete*, but the end **will be great.**


---
# From here, it is about the class assignment.
>We will summarize the contents of top,ps,jobs and skill in linux (in KOREAN)

**ps(Process Status)**

현재 시스템에서 실행 중인 프로세스의 스냅샷 상태를 확인하는 명령어

|옵션 |설명 |
|:--:|:--:|
|'-e'|현재 시스템에서 실행중인 *모든* 프로세스 출력|
|'-f'|*full format*으로 프로세스 상세 정보 출력(UID,PID,PPID 포함)|
|'aux'| BSD문법으로 모든 프로세스를 출력하며 *CPU,메모리* 점유율도 표시|

ex)

'''bash
$ ps -ef
# 모든 프로세스를 상세정보랑 같이 출력 (system V 스타일)

$ ps -aux
# CPU ㅣㅁㅊ 메모리 사용량 포함하여 출력 (BSD 스타일)

$ ps -ef | grep python
# 특정 프로세스(python)만 검색

**top**

시스템의 프로세스 상태를 *실시간*으로 갱신하여 보여주는 작업 관리자

2-1 화면 구성 요소
+ 시스템 요약: 가동시간,사용자 수, 로드 에버리지
+ Task 상태: 전체, 실행중, 슬립, 정지, 좀비 프로세스 개수
+ CPU/Memory: CPU사용률, 메모리 및 스왑 사용량
  
2-2 실행 화면 예시
![image]("C:\Users\parkj\OneDrive\바탕 화면\스크린샷 2025-11-29 205258.png")

2-3 주요 단축키
- q: top 종료
- k: 특정 프로세스 종료 (PID입력 필요)
- c: 명령어를 전체경로(Full path)로 표시
- 1: CPU 코어별 사용량 확인



# 특정 프로세스(예: python)만 검색
$ ps -ef | grep python
