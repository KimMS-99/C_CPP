# 10장 템플릿과 표준 템플릿 라이브러리(STL)
***
## 목차
[1. 일반화와 템플릿](#1-일반화와-템플릿)<br>
[2. 다양한 제네릭 함수 만들기](#2-다양한-제네릭-함수-만들기)<br>
[3. 제네릭 클래스 만들기](#3-제네릭-클래스-만들기)<br>
[4. C++ 표준 템플릿 라이브러리(STL)와 활용](#4-c-표준-템플릿-라이브러리stl와-활용)<br>
[5. auto와 람다식](#5-auto와-람다식)<br>
***

+ ***25년 7월 4일***
## 1. 일반화와 템플릿<br>
예제) P479 <br>
<img width="954" alt="스크린샷 2025-07-01 오후 4 42 36" src="https://github.com/user-attachments/assets/a9bfc568-a0ff-4d07-aee2-1d6225819a72" />
<img width="910" alt="스크린샷 2025-07-01 오후 4 41 47" src="https://github.com/user-attachments/assets/564542c8-d7bc-47a0-a678-c28e1da75d5f" />
<img width="954" alt="스크린샷 2025-07-01 오후 4 42 49" src="https://github.com/user-attachments/assets/5021cf04-13bd-4b7e-bc61-26a815f2538b" />
<img width="954" alt="스크린샷 2025-07-01 오후 4 43 09" src="https://github.com/user-attachments/assets/ee5c1792-3a0b-40e8-af42-4f332950e288" />
<img width="970" alt="스크린샷 2025-07-01 오후 4 43 26" src="https://github.com/user-attachments/assets/a9ada50e-7639-46de-a470-6386deb07acc" />
<img width="799" alt="스크린샷 2025-07-01 오후 4 43 46" src="https://github.com/user-attachments/assets/9e68ab7e-9c5d-49d3-a103-1c04f854d06a" />
<img width="751" alt="스크린샷 2025-07-01 오후 4 44 01" src="https://github.com/user-attachments/assets/0aaba4cd-6e8b-44a8-ba51-428b81b87400" />

## 2. 다양한 제네릭 함수 만들기<br>
예제) P482, P483, P484, P486 <br>
<img width="907" alt="스크린샷 2025-07-01 오후 4 44 34" src="https://github.com/user-attachments/assets/37cb688a-2cb7-4586-a31d-0f3ff6dec236" />

#### 템플릿 함수에 디폴트 매개 변수 사용
템플릿에서 함수 선언에 디폴트 매개 변수를 사용할 수 있다.
```cpp
template <class T1, class T2>
void mcopy(T1 src[], T2 dest[], int n = 5) // n 의 디폴트 값은 5
{
    for(int i = 0; i < n; i++)
        dest[i] = (T2)src[i];
}
```
mcopy()는 디폴트 매개 변수를 활용하여 다음과 같이 호출 가능.
```cpp
int x[] = {1, 2, 3, 4, 5};
double d[5];
mcopy(x, d); // x[]의 원소 5개를 d[]에 복사
```

## 3. 제네릭 클래스 만들기<br>
예제) P491, P492, P494<br>
<img width="782" alt="스크린샷 2025-07-01 오후 4 44 57" src="https://github.com/user-attachments/assets/5764164a-e8ed-4308-9734-b14290cd0ae9" />

#### 함수의 매개 변수 타입이 제네릭 클래스일 떄
+ int 타입의 MyStack 객체의 모든 원소를 팝하여 출력하는 함수를 선언하고 호출하는 사례
```cpp
void popAll(MyStack<int> s){...} // 매개 변수 s : int 타입의 MyStack 객체

MyStack<int> iStack;
popAll(iStack);
```
+ 앞의 popAll() 함수가 실행되면 iStack 객체를 복사하여 객체 s가 생기는데 아래와 같이 참조 매개 변수를 사용하면 객체 복사의 오버헤드를 제거할 수 있음.
```cpp
void popAll(MyStack<int> &r){...} // 매개변수 r : int 타입의 MyStack 객체의 참조

popAll(iStack);
```
+ 또한 아래와 같이 함수의 매개 변수로 제네릭 객체의 포인터도 선언 가능함.
```cpp
void popAll(MyStack<int> *p); // 매개변수 p : int 타입의 MyStack 객체의 포인터

popAll(&iStack);
```
<img width="964" alt="스크린샷 2025-07-01 오후 4 45 49" src="https://github.com/user-attachments/assets/8d2af6e2-dea3-483b-9d9f-fd0d03673b21" />

+ ***25년 7월 7일***
## 4. C++ 표준 템플릿 라이브러리(STL)와 활용<br>
예제) P502, P503, P506, P508, P509 <br>
<img width="928" alt="스크린샷 2025-07-01 오후 4 46 06" src="https://github.com/user-attachments/assets/0a9e6c4b-194e-4932-b9d7-ec2b401c4073" />
<img width="674" alt="스크린샷 2025-07-01 오후 4 46 19" src="https://github.com/user-attachments/assets/7ca65f3d-16dc-480a-85ba-8be915cb38b9" />
<img width="776" alt="스크린샷 2025-07-01 오후 4 46 30" src="https://github.com/user-attachments/assets/b6befe89-3577-4945-8fc7-19cfc6b83c64" />
<img width="846" alt="스크린샷 2025-07-01 오후 4 46 46" src="https://github.com/user-attachments/assets/96b8fba3-1f37-4bb3-aeea-40212c8a996d" />
<img width="846" alt="스크린샷 2025-07-01 오후 4 46 55" src="https://github.com/user-attachments/assets/2ac046b6-d09b-435c-a338-a279aa73a3d7" />
<img width="826" alt="스크린샷 2025-07-01 오후 4 47 06" src="https://github.com/user-attachments/assets/425278f1-e7b4-4a42-932c-9a8e002c9d6d" />
<img width="881" alt="스크린샷 2025-07-01 오후 4 47 27" src="https://github.com/user-attachments/assets/a9ea8d58-ca37-4063-aedb-75ab3b22eb4d" />
<img width="656" alt="스크린샷 2025-07-01 오후 4 47 44" src="https://github.com/user-attachments/assets/b5907431-d282-4347-abc1-ccd8e2ce646d" />
<img width="735" alt="스크린샷 2025-07-01 오후 4 48 04" src="https://github.com/user-attachments/assets/be17a422-acaf-48de-9c75-030c9d92f8df" />
<img width="778" alt="스크린샷 2025-07-01 오후 4 48 14" src="https://github.com/user-attachments/assets/917e1c30-6369-4c99-baa3-051941dcdc28" />
<img width="810" alt="스크린샷 2025-07-01 오후 4 48 30" src="https://github.com/user-attachments/assets/0309706a-268a-42b8-96a9-0cf20d3c2e93" />

## 5. auto와 람다식<br>
예제) P511, P514, P515, P516-1, P516-2, P517, P518 <br>
<img width="864" alt="스크린샷 2025-07-01 오후 4 48 42" src="https://github.com/user-attachments/assets/8894e625-430b-4a8c-84b0-a47db34c956e" />
<img width="864" alt="스크린샷 2025-07-01 오후 4 48 57" src="https://github.com/user-attachments/assets/b971ef1c-aa95-4c31-bdaf-e35bf73f0c14" />
<img width="864" alt="스크린샷 2025-07-01 오후 4 49 10" src="https://github.com/user-attachments/assets/ba8c94d3-74a9-4e40-a91c-812cf76e5bc8" />
<img width="864" alt="스크린샷 2025-07-01 오후 4 49 24" src="https://github.com/user-attachments/assets/bac4b77e-0438-48bb-a24f-e434cb49d27b" />

### 캡처 리스트(Capture List) 설명

C++ 람다식(Lambda Expression)에서 `[캡처 리스트]`는 람다 함수가 정의된 스코프(scope) 외부에 있는 변수들을 람다 함수 내부에서 사용할 수 있도록 해주는 역할을 합니다. 람다 함수가 외부 변수들을 "붙잡아(capture)" 자신의 몸 안으로 가져오는 방법입니다.

#### 캡처 리스트의 종류와 동작 방식:

1.  **값으로 캡처 (Capture by Value)** `[변수명]` 또는 `[=]`
    *   **문법:** `[변수명]` 또는 `[=]`
    *   **동작:** 람다 함수가 생성될 때, 해당 변수의 **값(복사본)**이 람다 함수 내부로 복사됩니다. 람다 함수 내부에서 이 복사본을 변경해도 원본 변수에는 영향을 주지 않습니다.
    *   **`mutable` 키워드:** 값으로 캡처된 변수를 람다 내부에서 변경하고 싶다면, 람다 매개변수 리스트 뒤에 `mutable` 키워드를 붙여야 합니다.

2.  **참조로 캡처 (Capture by Reference)** `[&변수명]` 또는 `[&]`
    *   **문법:** `[&변수명]` 또는 `[&]`
    *   **동작:** 람다 함수가 생성될 때, 해당 변수의 **참조(reference)**가 람다 함수 내부로 전달됩니다. 람다 함수 내부에서 이 변수를 변경하면 **원본 변수도 함께 변경**됩니다.
    *   **주의:** 참조로 캡처된 변수는 람다 함수가 실행될 때까지 유효해야 합니다. 람다 함수가 변수의 스코프를 벗어난 후에 실행되면 **댕글링 참조(Dangling Reference)** 문제가 발생하여 예측 불가능한 동작을 초래할 수 있습니다.

3.  **암시적 캡처 (Implicit Capture)** `[=]` 또는 `[&]`
    *   **문법:**
        *   `[=]`: 람다 함수 본문에서 사용되는 **모든 외부 변수를 값으로 캡처**합니다.
        *   `[&]`: 람다 함수 본문에서 사용되는 **모든 외부 변수를 참조로 캡처**합니다.
    *   **동작:** 편리하지만, 어떤 변수가 캡처되는지 명시적으로 보이지 않으므로 코드 가독성이 떨어질 수 있습니다.

4.  **혼합 캡처 (Mixed Capture)**
    *   **문법:** 암시적 캡처와 명시적 캡처를 함께 사용할 수 있습니다.
    *   **동작:** 암시적 캡처(`[=]` 또는 `[&]`)를 먼저 쓰고, 그 다음에 예외적으로 캡처 방식을 바꾸고 싶은 변수를 명시합니다. (예: `[=, &q]`)

5.  **`this` 캡처** `[this]` 또는 `[=]`
    *   **문법:** `[this]` 또는 `[=]` (암시적 값 캡처에 `this`도 포함됨)
    *   **동작:** 클래스 멤버 함수 내에서 람다를 정의할 때, 람다 내부에서 해당 클래스의 멤버 변수나 멤버 함수에 접근하려면 `this` 포인터를 캡처해야 합니다.

캡처 리스트는 람다식을 강력하고 유연하게 만들어주는 핵심 메커니즘입니다. 적절한 캡처 방식을 선택하는 것이 중요하며, 특히 참조 캡처 시에는 변수의 생명 주기(lifetime)에 주의해야 합니다.