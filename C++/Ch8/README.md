# 8장 상속
***
## 목차
[1. 상속의 개념](#1-상속의-개념)<br>
[2. 클래스 상속과 객체](#2-클래스-상속과-객체)<br>
[3. 상속과 객체 포인터](#3-상속과-객체-포인터)<br>
[4. protected 접근 지정](#4-protected-접근-지정)<br>
[5. 상속과 생성자, 소멸자](#5-상속과-생성자-소멸자)<br>
[6. 상속의 종류 : public, protected, private 상속](#6-상속의-종류--public-protected-private-상속)<br>
[7. 다중 상속](#7-다중-상속)<br>
[8. 가상 상속](#8-가상-상속)
***
+ **25년 7월 2일**
## 1. 상속의 개념<br>
<img width="905" alt="스크린샷 2025-07-01 오후 4 21 40" src="https://github.com/user-attachments/assets/f18df913-5b08-4690-b235-222c92bb2091" />
<img width="905" alt="스크린샷 2025-07-01 오후 4 21 54" src="https://github.com/user-attachments/assets/50df1ce3-b338-4a22-a63d-0e710509bfa9" />
<img width="905" alt="스크린샷 2025-07-01 오후 4 22 03" src="https://github.com/user-attachments/assets/37ac8634-7024-47da-9515-a9785ad64557" />
<img width="905" alt="스크린샷 2025-07-01 오후 4 22 34" src="https://github.com/user-attachments/assets/8b1a5f5c-b9e5-4d1f-bb84-780bcec1280d" />

## 2. 클래스 상속과 객체<br>
예제) P379 <br>
<img width="866" alt="스크린샷 2025-07-01 오후 4 22 49" src="https://github.com/user-attachments/assets/49b19a8b-0c0f-43ba-94b3-c72d6bdc9968" />
<img width="904" alt="스크린샷 2025-07-01 오후 4 23 14" src="https://github.com/user-attachments/assets/e7d7e0f3-4309-4e6c-99ac-b10fdc8bf5e1" />
<img width="842" alt="스크린샷 2025-07-01 오후 4 23 26" src="https://github.com/user-attachments/assets/b0708158-fdad-47c9-97cc-32a449c3e06f" />
<img width="827" alt="스크린샷 2025-07-01 오후 4 23 42" src="https://github.com/user-attachments/assets/a1a1078d-cb55-4bdd-a583-23b9830a7993" />

+ **25년 7월 3일**
## 3. 상속과 객체 포인터<br>
예제) P383, Test(매개변수의 다형성) <br>
<img width="941" alt="스크린샷 2025-07-01 오후 4 23 59" src="https://github.com/user-attachments/assets/2b84930b-7716-426d-a8b3-8408ce4e87ad" />

+ 업케스팅 시에는 "Is-A" 관계 (상속 관계), 안전성 (정보 손실 없음), 컴파일러의 암시적 변환 허용 으로 형 변환을 안해 됨.
+ 주요 목적: 런타임 다형성을 활성화하여 오버라이딩된 가상 함수의 효과를 발휘하게 함. 다양한 파생 클래스 객체들을 하나의 공통된 기본 클래스 타입으로 균일하게 처리할 수 있게 해줌.
<img width="959" alt="스크린샷 2025-07-01 오후 4 24 15" src="https://github.com/user-attachments/assets/b482ebdc-b0db-4bbd-9276-9a3a7eb70bfb" />

+ 다운캐스팅 시에는 형 변환이 필요함, 업캐스팅 없이 하면 위험함(잘못된 메모리 접근, 정의되지 않은 동작).
+ 잘 쓰이지 않음.

## 4. protected 접근 지정<br>
예제) P388 <br>
<img width="848" alt="스크린샷 2025-07-01 오후 4 24 36" src="https://github.com/user-attachments/assets/590dacc5-aba0-43b7-9825-d86d031d0514" />
<img width="904" alt="스크린샷 2025-07-01 오후 4 24 51" src="https://github.com/user-attachments/assets/7ecab499-80db-47f8-98ef-452b6ff97f49" />

## 5. 상속과 생성자, 소멸자<br>
예제) P395 <br>
<img width="904" alt="스크린샷 2025-07-01 오후 4 25 08" src="https://github.com/user-attachments/assets/3450bf18-b0fc-42f0-b02d-748d55873837" />
<img width="821" alt="스크린샷 2025-07-01 오후 4 25 23" src="https://github.com/user-attachments/assets/2cd3f16c-0f73-468e-a230-56aa8fe6dfca" />
<img width="587" alt="스크린샷 2025-07-01 오후 4 25 36" src="https://github.com/user-attachments/assets/f15a9f1c-5bf8-41b9-b3ca-7efb6022edc9" />
<img width="872" alt="스크린샷 2025-07-01 오후 4 25 52" src="https://github.com/user-attachments/assets/a88e174c-36e6-4b56-aadc-d926c4dd2c8e" />
<img width="872" alt="스크린샷 2025-07-01 오후 4 26 04" src="https://github.com/user-attachments/assets/1961d505-2ad8-4f07-9474-685876cc1f61" />
<img width="885" alt="스크린샷 2025-07-01 오후 4 27 17" src="https://github.com/user-attachments/assets/426a4d81-df34-4017-87d8-fc5475662cec" />
<img width="885" alt="스크린샷 2025-07-01 오후 4 27 28" src="https://github.com/user-attachments/assets/7b40501a-65c3-4787-a52d-6a628e60b452" />
<img width="832" alt="스크린샷 2025-07-01 오후 4 27 42" src="https://github.com/user-attachments/assets/b2d2be1f-3376-4dce-ae8c-b0bea81173d2" />

## 6. 상속의 종류 : public, protected, private 상속<br>
예제) P399 <br>
<img width="832" alt="스크린샷 2025-07-01 오후 4 27 52" src="https://github.com/user-attachments/assets/5b279ae6-7eb8-4904-941b-a11a4f5d3b48" />
<img width="920" alt="스크린샷 2025-07-01 오후 4 28 05" src="https://github.com/user-attachments/assets/16576bf7-ccbb-4ab7-b144-979501238a9a" />

## 7. 다중 상속<br>
예제) P404 <br>
<img width="814" alt="스크린샷 2025-07-01 오후 4 28 25" src="https://github.com/user-attachments/assets/58dffcf6-c76e-46e2-8dce-6a9dafbb6c62" />

## 8. 가상 상속<br>
<img width="1024" alt="스크린샷 2025-07-01 오후 4 28 57" src="https://github.com/user-attachments/assets/e82c8489-fee6-4e19-92c7-63e7b10bcf83" />
<img width="903" alt="스크린샷 2025-07-01 오후 4 29 20" src="https://github.com/user-attachments/assets/5e6bf7c7-4797-4a43-92a7-d7cd2f8def32" />
<img width="959" alt="스크린샷 2025-07-01 오후 4 29 34" src="https://github.com/user-attachments/assets/37e0e6e6-efee-41f7-a2e7-28ebf860ca59" />
