# 11장 C++ 입출력 시스템
***
## 목차
[1. C++ 입출력 기초](#1-c-입출력-기초)<br>
[2. ostream의 멤버 함수를 이용한 문자 출력](#2-ostream의-멤버-함수를-이용한-문자-출력)<br>
[3. istream의 멤버 함수를 이용한 문자 입력](#3-istream의-멤버-함수를-이용한-문자-입력)<br>
[4. 포맷 입출력](#4-포맷-입출력)<br>
[5. 삽입 연산자(<<)와 추출 연산자(>>)](#5-삽입-연산자와-추출-연산자)<br>
[6. 사용자 조작자 만들기](#6-사용자-조작자-만들기)
***
+ ***25년 7월 7일***
## 1. C++ 입출력 기초<br>
<img width="974" alt="스크린샷 2025-07-02 오전 8 20 23" src="https://github.com/user-attachments/assets/e0ba5fae-0d8d-49de-bcce-632e6706e40d" />
<img width="1095" alt="스크린샷 2025-07-02 오전 8 20 41" src="https://github.com/user-attachments/assets/1888e28a-a368-4c6e-8f30-bb8d9164f468" />
<img width="996" alt="스크린샷 2025-07-02 오전 8 20 57" src="https://github.com/user-attachments/assets/1fa41b4e-bc99-4c80-ae5b-764fe42ceec9" />
<img width="996" alt="스크린샷 2025-07-02 오전 8 21 09" src="https://github.com/user-attachments/assets/7cd27680-7b10-4da0-a8d7-2862bf6f0d1e" />
<img width="993" alt="스크린샷 2025-07-02 오전 8 21 26" src="https://github.com/user-attachments/assets/b3573edf-2b32-4fd8-814a-54a8445c2ed0" />
<img width="939" alt="스크린샷 2025-07-02 오전 8 22 26" src="https://github.com/user-attachments/assets/beb4c5d6-0b49-4e0f-b364-12d8a2222e2d" />
<img width="939" alt="스크린샷 2025-07-02 오전 8 23 26" src="https://github.com/user-attachments/assets/3d7eaff2-b78d-4a7f-9256-d75988631d1e" />
<img width="937" alt="스크린샷 2025-07-02 오전 8 23 42" src="https://github.com/user-attachments/assets/a701680b-6eec-4748-a861-fc1f32a8af74" />
<img width="897" alt="스크린샷 2025-07-02 오전 8 23 52" src="https://github.com/user-attachments/assets/8d40a481-d514-4da5-a301-4a7543caefee" />
<img width="878" alt="스크린샷 2025-07-02 오전 8 24 04" src="https://github.com/user-attachments/assets/3dca6beb-47e3-4ba6-babe-ff8e69259b9e" />
<img width="874" alt="스크린샷 2025-07-02 오전 8 24 20" src="https://github.com/user-attachments/assets/7d82c4ae-38fb-4b11-bd59-5eb4c0350a6a" />

## 2. ostream의 멤버 함수를 이용한 문자 출력<br>
예제) P542 <br>
<img width="790" alt="스크린샷 2025-07-02 오전 8 24 30" src="https://github.com/user-attachments/assets/1b8c57ed-4b63-4bfc-b5a0-23a178ae783f" />

## 3. istream의 멤버 함수를 이용한 문자 입력<br>
예제) P545, P574, P549 <br>
<img width="865" alt="스크린샷 2025-07-02 오전 8 25 08" src="https://github.com/user-attachments/assets/f9c58fa8-0955-497c-b360-6a78098afc66" />
<img width="815" alt="스크린샷 2025-07-02 오전 8 25 30" src="https://github.com/user-attachments/assets/31daf905-1f2b-4e97-a2b2-d807231af5f0" />
<img width="904" alt="스크린샷 2025-07-02 오전 8 25 44" src="https://github.com/user-attachments/assets/977dd3d4-9006-4b61-a2e4-ee1b9c3ddfba" />
<img width="923" alt="스크린샷 2025-07-02 오전 8 26 03" src="https://github.com/user-attachments/assets/6630fb61-6b4a-4ea2-a2e3-c262b250d397" />

- 한 줄을 읽고자 할 땐 get()보다 getline()을 권장. getline()은 한 줄의 끝을 표시하는 '\n' 문자를 cin 버퍼에서 제거하기 때문에, 그 다음에 다시 한 줄을 읽을 때 '\n' 처리에 고만히지 않아도 됨. <br>
<img width="890" alt="스크린샷 2025-07-02 오전 8 28 11" src="https://github.com/user-attachments/assets/8143116c-17e3-476f-a791-bb8e9067de0b" />

## 4. 포맷 입출력<br>
예제) P553, P559, P560 <br>
<img width="630" alt="스크린샷 2025-07-02 오전 8 28 26" src="https://github.com/user-attachments/assets/16a25d16-c456-4dd6-8e91-e474ec4ab34b" />
<img width="798" alt="스크린샷 2025-07-02 오전 8 28 35" src="https://github.com/user-attachments/assets/219083f6-b710-46a1-a2b9-7f7070065742" />
<img width="753" alt="스크린샷 2025-07-02 오전 8 28 50" src="https://github.com/user-attachments/assets/66efe4e3-f022-4660-b287-ced511fa2359" />
<img width="730" alt="스크린샷 2025-07-02 오전 8 29 03" src="https://github.com/user-attachments/assets/4984120b-b84c-40c8-a9f6-21215a864c5d" />
<img width="981" alt="스크린샷 2025-07-02 오전 8 29 23" src="https://github.com/user-attachments/assets/562a1f32-f885-4c0b-932f-2a7f1f082f28" />
<img width="754" alt="스크린샷 2025-07-02 오전 8 31 48" src="https://github.com/user-attachments/assets/ca59084d-c702-46e4-a880-11e00e256265" />
<img width="735" alt="스크린샷 2025-07-02 오전 8 31 59" src="https://github.com/user-attachments/assets/bddff7bc-104a-4337-bb8b-1feed3241424" />
<img width="838" alt="스크린샷 2025-07-02 오전 8 32 10" src="https://github.com/user-attachments/assets/4eddd168-f0a8-4c3c-b6c4-2c4aabcb3a34" />

## 5. 삽입 연산자(<<)와 추출 연산자(>>)<br>
예제) P567, P568, P571 <br>
<img width="765" alt="스크린샷 2025-07-02 오전 8 32 24" src="https://github.com/user-attachments/assets/4b3a6279-6679-4d7a-9c25-5fd4c665b59d" />
<img width="998" alt="스크린샷 2025-07-02 오전 8 32 43" src="https://github.com/user-attachments/assets/d640fb16-12df-47e4-a5d0-5244bbe92418" />
<img width="864" alt="스크린샷 2025-07-02 오전 8 33 03" src="https://github.com/user-attachments/assets/f1b120f0-a5fd-4d07-a5ff-6e88e171cbee" />
<img width="891" alt="스크린샷 2025-07-02 오전 8 33 17" src="https://github.com/user-attachments/assets/505bef6d-96ac-432b-9621-3fcd95c446cd" />
<img width="761" alt="스크린샷 2025-07-02 오전 8 33 32" src="https://github.com/user-attachments/assets/d85131c0-c20a-4f31-8b2f-e58b0ee4430d" />
<img width="853" alt="스크린샷 2025-07-02 오전 8 34 30" src="https://github.com/user-attachments/assets/f95b1735-82fd-4ced-82af-449b20772cbe" />
<img width="882" alt="스크린샷 2025-07-02 오전 8 34 44" src="https://github.com/user-attachments/assets/26b6bbbf-7bbc-4968-b14d-1799b81c8e90" />

## 6. 사용자 조작자 만들기<br>
예제) P574, P575 <br>
<img width="981" alt="스크린샷 2025-07-02 오전 8 34 59" src="https://github.com/user-attachments/assets/8cbed79a-2890-49c5-9c72-7c3e9a81d115" />
<img width="655" alt="스크린샷 2025-07-02 오전 8 35 10" src="https://github.com/user-attachments/assets/72292bfb-17cc-4b61-acd5-dca8b6202079" />
