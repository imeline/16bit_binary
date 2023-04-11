# 16비트 데이터를 2진수로 출력하는 프로그램

![image](https://user-images.githubusercontent.com/128706341/231083318-8b835bf5-2b96-4afc-90b5-582ebde160d3.png)

입력은 16진수로 

-> 1. 한 자리수의 16진수는 4bit, 16bit는 총 4자리 수의 16진수를 입력할 수 있다.

   2. 16진수를 2진수로 바꾸는 방법은 16진수의 한자리 수마다 이진수로 바꾸어 합치면 된다.
   
   3. 이진수는 한 자리수마다 1bit이다.


### reportSys0404.c
1. int my_htob(char c) 
   1) 출력 : 16진수의 한 자리수를 이진수로 바꾼 것을 print
   2) return : 그에 해당하는 bit를 return
   3) 변수 print_start : 이진수를 1부터 출력하도록 함. ex) 0010 -> 10

2. main 함수
   1) 첫 for문 : 입력 값 한 자리씩 my_htob 함수 파라미터로 넘겨줘서 이진수로 바꾼 값을 print하고 bit값을 받음
   2) 두번째 for문 : 받은 bit값을 차례대로 출력
