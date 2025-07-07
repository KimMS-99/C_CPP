# 5장 함수와 참조, 복사 생성자
***
## 목차
[1. 함수의 인자 전달 방식 리뷰](#1-함수의-인자-전달-방식-리뷰)<br>
[2. 함수 호출시 객체 전달](#2-함수-호출시-객체-전달)<br>
[3. 객체 치환 및 객체 리턴](#3-객체-치환-및-객체-리턴)<br>
[4. 참조와 함수](#4-참조와-함수)<br>
[5. 복사 생성자](#5-복사-생성자)
***
+ **25년 7월 1일**
## 1. 함수의 인자 전달 방식 리뷰<br>
<img width="806" alt="스크린샷 2025-07-01 오전 9 19 38" src="https://github.com/user-attachments/assets/81f7ee21-e63f-496e-9507-3967b5dad870" />
<img width="977" alt="스크린샷 2025-07-01 오전 9 33 35" src="https://github.com/user-attachments/assets/50762b6f-74ab-40fd-aa34-55d9abd36f31" />

## 2. 함수 호출시 객체 전달<br>
예제) P224<br>
<img width="940" alt="스크린샷 2025-07-01 오전 9 38 57" src="https://github.com/user-attachments/assets/e4a319ff-9be0-48ac-affd-90d809a413bf" />
<img width="926" alt="스크린샷 2025-07-01 오전 9 40 00" src="https://github.com/user-attachments/assets/ad4654e6-63ea-4398-8780-4a35e6e1c375" />
<img width="988" alt="스크린샷 2025-07-01 오전 9 45 26" src="https://github.com/user-attachments/assets/edc31203-392f-43aa-9e2b-3e93771369d7" />
<img width="851" alt="스크린샷 2025-07-01 오전 9 45 39" src="https://github.com/user-attachments/assets/817a0426-0e8e-424f-9623-9545282603ac" />
<img width="971" alt="스크린샷 2025-07-01 오전 9 45 53" src="https://github.com/user-attachments/assets/19e770c9-687d-4124-b606-493f8486116b" />

## 3. 객체 치환 및 객체 리턴<br>
예제) P230<br>
<img width="869" alt="스크린샷 2025-07-01 오전 10 24 22" src="https://github.com/user-attachments/assets/ebdbeccc-cd45-4582-a529-1f4992e2dcd8" />

## 4. 참조와 함수<br>
예제) P234, P235, P239, P240, P243<br>
<img width="780" alt="스크린샷 2025-07-01 오전 10 39 24" src="https://github.com/user-attachments/assets/48669b19-dbfa-4890-acbb-36fb004f413a" />
<img width="780" alt="스크린샷 2025-07-01 오전 10 39 47" src="https://github.com/user-attachments/assets/6ba80399-9e3e-42d5-a0b9-9f073d93c96c" />
<img width="732" alt="스크린샷 2025-07-01 오전 10 41 08" src="https://github.com/user-attachments/assets/a3e6833d-93cc-4a2b-b37e-f30ce01121d7" />
<img width="967" alt="스크린샷 2025-07-01 오전 10 41 20" src="https://github.com/user-attachments/assets/7b951154-5488-402b-b481-a519b4467198" />
<img width="887" alt="스크린샷 2025-07-01 오전 10 41 32" src="https://github.com/user-attachments/assets/05d14cc9-1fd0-4887-b239-2cb9ccee1567" />
<img width="723" alt="스크린샷 2025-07-01 오전 10 42 13" src="https://github.com/user-attachments/assets/7b2aa84a-2633-493d-98d1-9fb216b451a1" />
<img width="961" alt="스크린샷 2025-07-01 오전 10 42 50" src="https://github.com/user-attachments/assets/dd8de395-806e-420a-ba0d-01c82e89caa2" />

## 5. 복사 생성자<br>
예제) P249, P252, P257, P263<br>
<img width="810" alt="스크린샷 2025-07-01 오전 11 00 57" src="https://github.com/user-attachments/assets/2baaa1ee-0adf-495e-a816-2b64b887f298" />
<img width="968" alt="스크린샷 2025-07-01 오전 11 01 46" src="https://github.com/user-attachments/assets/25a0faad-c689-4840-87f8-b5da49b180ff" />
<img width="824" alt="스크린샷 2025-07-01 오전 11 01 59" src="https://github.com/user-attachments/assets/19f49eaa-4cb3-4834-a07c-76d82807a8d4" />
<img width="814" alt="스크린샷 2025-07-01 오전 11 02 12" src="https://github.com/user-attachments/assets/b825aae5-8463-4a48-9087-585e45a64e13" />
<img width="814" alt="스크린샷 2025-07-01 오전 11 02 22" src="https://github.com/user-attachments/assets/6e5ae323-7a18-4d49-ba8f-fad1616ec140" />
<img width="808" alt="스크린샷 2025-07-01 오전 11 02 41" src="https://github.com/user-attachments/assets/b8595637-5902-457d-b62c-71a18ef3bb87" />

+ RVO(Return Value Optimization)란 컴파일러가 함수에서 객체를 리턴할 때 불필요한 복사를 생략하는 최적화