# 12장 C++ 파일 입출력
***
## 목차
[1. 텍스트 파일과 바이너리 파일](#1-텍스트-파일과-바이너리-파일)<br>
[2. 파일 입출력 개요](#2-파일-입출력-개요)<br>
[3. <<와 >> 연산자를 이용한 간단한 텍스트 파일 입출력](#3-와--연산자를-이용한-간단한-텍스트-파일-입출력)<br>
[4. 파일 모드](#4-파일-모드)<br>
[5. 멤버 함수를 이용한 텍스트 I/O](#5-멤버-함수를-이용한-텍스트-io)<br>
[6. 바이너리 I/O](#6-바이너리-io)<br>
[7. 스트림 상태 검사](#7-스트림-상태-검사)<br>
[8. 임의 접근](#8-임의-접근)
***
+ ***25년 7월 8일***
## 1. 텍스트 파일과 바이너리 파일<br>
<img width="960" alt="스크린샷 2025-07-02 오전 8 37 13" src="https://github.com/user-attachments/assets/9514208b-27ec-4f25-886b-267adbf4f89c" />
<img width="975" alt="스크린샷 2025-07-02 오전 8 37 34" src="https://github.com/user-attachments/assets/e5a1c547-ec36-4051-bc09-208655a4d3da" />
<img width="864" alt="스크린샷 2025-07-02 오전 8 37 48" src="https://github.com/user-attachments/assets/a49b102d-9c38-4a20-9fb9-12052de9f862" />
<img width="900" alt="스크린샷 2025-07-02 오전 8 38 00" src="https://github.com/user-attachments/assets/26ef2a1b-67c3-4910-970b-e44a4e63eb03" />
<img width="873" alt="스크린샷 2025-07-02 오전 8 38 14" src="https://github.com/user-attachments/assets/4cd516fa-b55a-4f5c-a56e-b673c52bc128" />
<img width="905" alt="스크린샷 2025-07-02 오전 8 38 26" src="https://github.com/user-attachments/assets/9d44a5ae-f40e-4ddd-9890-db5669143dc0" />

## 2. 파일 입출력 개요<br>
<img width="792" alt="스크린샷 2025-07-02 오전 8 38 39" src="https://github.com/user-attachments/assets/42df008c-71d3-4517-b324-9b10c9e50360" />
<img width="1005" alt="스크린샷 2025-07-02 오전 8 38 55" src="https://github.com/user-attachments/assets/3a7b3d6f-8bd6-47ac-9913-50e4d36963b9" />
<img width="927" alt="스크린샷 2025-07-02 오전 8 39 07" src="https://github.com/user-attachments/assets/6a5abbd7-b1e8-41d1-9dd7-8983e21543fe" />
<img width="746" alt="스크린샷 2025-07-02 오전 8 39 18" src="https://github.com/user-attachments/assets/896c6f7a-ac7a-429c-868c-6512f5093321" />
<img width="896" alt="스크린샷 2025-07-02 오전 8 39 31" src="https://github.com/user-attachments/assets/bf464308-73ac-48c7-975c-ef100e42910e" />

## 3. <<와 >> 연산자를 이용한 간단한 텍스트 파일 입출력<br>
예제) P597, P598, P600<br>
<img width="911" alt="스크린샷 2025-07-02 오전 8 39 54" src="https://github.com/user-attachments/assets/8ef1abf9-b190-4d41-86a2-317eb86131c7" />

## 4. 파일 모드<br>
<img width="833" alt="스크린샷 2025-07-02 오전 8 40 14" src="https://github.com/user-attachments/assets/0b366242-c794-4373-8cb6-31b691412e86" />
<img width="823" alt="스크린샷 2025-07-02 오전 8 40 24" src="https://github.com/user-attachments/assets/e7fd9c2a-8502-4ccd-ba96-fc02e042e4a9" />

## 5. 멤버 함수를 이용한 텍스트 I/O<br>
예제) P605, P609, P610, P612<br>
<img width="870" alt="스크린샷 2025-07-02 오전 8 41 11" src="https://github.com/user-attachments/assets/586b32a7-e82a-455c-9237-0ab737ef70b4" />
<img width="780" alt="스크린샷 2025-07-02 오전 8 41 23" src="https://github.com/user-attachments/assets/b40a2e59-1d29-4335-a285-e14369cdef17" />
<img width="762" alt="스크린샷 2025-07-02 오전 8 42 07" src="https://github.com/user-attachments/assets/7593aa62-ed52-4bde-848d-a00666b91b42" />
<img width="890" alt="스크린샷 2025-07-02 오전 8 42 27" src="https://github.com/user-attachments/assets/6107fe15-78c2-4456-892a-f606e8b5f68b" />

## 6. 바이너리 I/O<br>
예제) P614, P616, P618, P619 <br>
<img width="918" alt="스크린샷 2025-07-02 오전 8 42 40" src="https://github.com/user-attachments/assets/7aef7a75-9074-442c-8a0c-2a6d292e2a55" />
<img width="876" alt="스크린샷 2025-07-02 오전 8 43 14" src="https://github.com/user-attachments/assets/48118031-1fb7-40bd-b0ef-b567494b3b68" />
<img width="878" alt="스크린샷 2025-07-02 오전 8 43 29" src="https://github.com/user-attachments/assets/b3348caf-8353-4fc2-a855-b0620d6e3918" />
<img width="878" alt="스크린샷 2025-07-02 오전 8 43 37" src="https://github.com/user-attachments/assets/dccb52e3-8923-4913-857e-1aca7400690f" />

## 7. 스트림 상태 검사<br>
예제) P623 <br>
<img width="917" alt="스크린샷 2025-07-02 오전 8 43 50" src="https://github.com/user-attachments/assets/c6c66f18-264f-41e6-9b80-dd7b3659de5a" />
<img width="902" alt="스크린샷 2025-07-02 오전 8 44 01" src="https://github.com/user-attachments/assets/d50405f4-2ac7-4b68-a888-3af09d5bdd16" />

## 8. 임의 접근<br>
예제) P629 <br>
<img width="831" alt="스크린샷 2025-07-02 오전 8 44 17" src="https://github.com/user-attachments/assets/f3ecccc0-7cd8-417a-91be-fabc54469283" />
<img width="875" alt="스크린샷 2025-07-02 오전 8 44 27" src="https://github.com/user-attachments/assets/869d7c2e-e92d-40c5-9d99-3fcd38f15f8c" />
<img width="785" alt="스크린샷 2025-07-02 오전 8 55 30" src="https://github.com/user-attachments/assets/feca0f53-e0dd-4ced-bfa0-daaf78420222" />
<img width="935" alt="스크린샷 2025-07-02 오전 8 55 46" src="https://github.com/user-attachments/assets/5345b23b-6e44-481b-94e9-1dee618959bc" />
