# 7장 프렌드와 연산자 중복
***
## 목차
[1. C++ 프렌드 개념](#1-c-프렌드-개념)<br>
[2. 연산자 중복](#2-연산자-중복)<br>
[3. 이항 연산자 중복](#3-이항-연산자-중복)<br>
[4. 단항 연산자 중복](#4-단항-연산자-중복)<br>
[5. 프렌드를 이용한 연산자 중복](#5-프렌드를-이용한-연산자-중복)<br>
[6. 참조를 리턴하는 << 연산자 실습](#6-참조를-리턴하는--연산자-실습)<br>
[실습 문제](#실습-문제)
***
+ **25년 7월 2일**
## 1. C++ 프렌드 개념<br>
예제) P322, P324, P325 <br>
<img width="916" alt="스크린샷 2025-07-01 오후 4 13 27" src="https://github.com/user-attachments/assets/c29ff647-9953-49eb-bf18-b09415b9fab0" />

+ 프렌드 사용 이유 : 외부 도우미 역할 자연스러움, 두 객체 대등하게 다룸
<img width="916" alt="스크린샷 2025-07-01 오후 4 13 45" src="https://github.com/user-attachments/assets/4206dc76-b556-4451-8a92-6af96230a2e2" />
<img width="817" alt="스크린샷 2025-07-01 오후 4 14 02" src="https://github.com/user-attachments/assets/c4862d5f-69ef-47e9-b599-cfd0120dc759" />

#### C++ friend 함수와 빌드 과정 (컴파일과 링크)

  friend 함수는 클래스의 멤버 함수가 아니면서도,
  해당 클래스의 private 및 protected 멤버에
  접근할 수 있도록 특별히 허용된 외부 함수입니다.
   캡슐화의 원칙을 일부 완화하여 유연성을
  제공하기 위해 사용됩니다.

  ***주요 사용 사례:***
   1. 연산자 오버로딩: cout << myObject와 같이 외부
      연산자 함수가 객체의 private 멤버에 접근해야
      할 때.
   2. 여러 클래스 간의 상호작용: 하나의 함수가 두 개
       이상의 다른 클래스의 private 멤버에 동시에
      접근해야 할 때.

  ***선언 방법:***
  클래스 정의부 내부에 friend 키워드를 사용하여
  함수의 원형을 선언합니다.
```cpp
    class MyClass {
    private:
        int private_variable;
    
    public:
        MyClass(int val) :
        private_variable(val) {}
    
        friend void showPrivate(const MyClass& obj); // friend 함수 선언
    };
    
    void showPrivate(const MyClass& obj) // friend 함수의 정의 (클래스 외부)
    {
        // friend 선언 덕분에 private 멤버에 접근 가능
    std::cout << "Private 변수 값: " << obj.private_variable << std::endl;
    }
```
***friend 함수 vs 멤버 함수***
+ friend 함수는 비멤버 함수이기 때문에 this 포인터가 없음.
+ 대신 객체를 매개변수로 전달받아 멤버에 접근함.

***friend는 캡슐화를 깨뜨리는가?***
+ 일부러 제한적으로 캡슐화를 완화하려고 도입된 문법입니다.<br>
    ->남용하면 안 되지만, 꼭 필요한 협력 작업이 있을 때 유용합니다.

***friend 함수는 반드시 선언한 클래스에서만 접근 가능***
```cpp
class A {
    int x;
    friend void f(A);  // f는 A의 x에만 접근 가능
};
class B {
    int y;
    friend void f(B);  // f를 또 선언해야 B의 y에도 접근 가능
};

```
  ---

**헤더에 선언하고 소스 파일에 구현하는 원리 : 컴파일과 링크**

  헤더 파일(.h)에 friend 함수를 선언하고, 다른
  소스 파일(.cpp)에 그 구현을 두어도 프로그램이
  올바르게 동작하는 이유는 컴파일러(Compiler)와
  링커(Linker)의 역할이 명확히 분리되어 있기
  때문입니다.

  1. 컴파일 단계 (Compile Phase)

   * 역할: 각 소스 파일(.cpp)을 개별적으로
     분석하여 기계어 코드인 오브젝트 파일(`.o` 
     또는 `.obj`)을 생성합니다.
   * `friend` 처리 방식:
       * 컴파일러는 #include된 헤더 파일을 보고
         friend로 선언된 함수를 인지합니다.
       * 해당 함수가 클래스의 private 멤버에
         접근하는 코드를 만나면, friend 선언을
         근거로 "접근 권한이 있다"고 판단하고 문법
         오류로 처리하지 않습니다.
       * 이때 컴파일러는 함수의
         선언(Declaration)만 필요로 할 뿐, 함수의
         실제 내용인 정의(Definition)가 어디
         있는지는 알 필요가 없습니다. 컴파일러는
         "나중에 링커가 함수의 실제 몸체를 찾아
         연결해 줄 것"이라고 가정하고, 함수 호출
         부분을 비워둔 채로 오브젝트 파일을
         생성합니다.

  2. 링크 단계 (Link Phase)


   * 역할: 컴파일러가 생성한 모든 오브젝트
     파일들과 필요한 라이브러리들을 하나로 묶어
     최종 실행 파일(Executable)을 만듭니다.
   * 핵심 작업: 심볼 해석 (Symbol Resolution)
       * 오브젝트 파일에는 "A 함수를 호출해야 함"
         또는 "B 함수의 실제 코드는 여기에 있음"과
         같은 심볼(Symbol) 정보가 들어있습니다.
       * 링커는 모든 오브젝트 파일을 탐색하며, 함수
          호출부(Call site)와 해당 함수의 실제
         구현부(Definition)를 찾아 연결합니다.
       * 예를 들어, main.o 파일에 있는 running()
         함수 호출을 main.o 파일(또는 다른
         오브젝트 파일)에 있는 running() 함수의
         실제 코드와 연결해 줍니다.
   * `friend` 처리 방식:
       * 링커는 friend 키워드에 대해 전혀 알지
         못하며, 신경 쓰지 않습니다.
       * 링커의 유일한 관심사는 호출된 함수의
         이름과 정확히 일치하는 구현이 단 하나
         존재하는지를 확인하고 이를 연결하는
         것입니다.

  이처럼 컴파일러는 권한을 검사하고, 링커는 
  흩어진 조각들을 조립하는 역할 분담 덕분에
  C++에서는 헤더 파일에 기능을 선언하고 소스
  파일에 구현을 분리하여 체계적인 프로젝트를
  구성할 수 있습니다.


## 2. 연산자 중복<br>
<img width="943" alt="스크린샷 2025-07-01 오후 4 14 29" src="https://github.com/user-attachments/assets/05d54b92-a2ae-4509-853a-2df4a0b454ce" />
<img width="943" alt="스크린샷 2025-07-01 오후 4 14 39" src="https://github.com/user-attachments/assets/4f69ee17-8b2d-4826-9cfb-c7a5a9dc270a" />
<img width="772" alt="스크린샷 2025-07-01 오후 4 15 04" src="https://github.com/user-attachments/assets/44f99018-21cd-4148-ad80-02d859950b28" />
<img width="921" alt="스크린샷 2025-07-01 오후 4 15 28" src="https://github.com/user-attachments/assets/26f8525f-aa2e-4928-9d22-e5089b7ecf3b" />

## 3. 이항 연산자 중복<br>
예제) P335, P337, P339, P341 <br>
<img width="889" alt="스크린샷 2025-07-01 오후 4 16 16" src="https://github.com/user-attachments/assets/192598ef-43c4-4d70-abce-763b9eece3e9" />
<img width="889" alt="스크린샷 2025-07-01 오후 4 16 50" src="https://github.com/user-attachments/assets/8008406b-3ace-4399-940c-17cc0042cc84" />
<img width="900" alt="스크린샷 2025-07-01 오후 4 17 01" src="https://github.com/user-attachments/assets/3640d9a5-5ea1-40a5-b88d-4c99b6201090" />

## 4. 단항 연산자 중복<br>
예제) P344, P345, P347 <br>
<img width="780" alt="스크린샷 2025-07-01 오후 4 17 44" src="https://github.com/user-attachments/assets/a875f694-db2b-465b-a018-00aaa107abb1" />
<img width="895" alt="스크린샷 2025-07-01 오후 4 17 58" src="https://github.com/user-attachments/assets/e468d166-5a28-4089-a506-61ee29f6dd3f" />
<img width="895" alt="스크린샷 2025-07-01 오후 4 18 10" src="https://github.com/user-attachments/assets/2eaa2f1d-7e11-41b7-8692-1990f79b12d9" />

## 5. 프렌드를 이용한 연산자 중복<br>
예제) P351, P353, P355 <br>
<img width="1004" alt="스크린샷 2025-07-01 오후 4 20 35" src="https://github.com/user-attachments/assets/893881f1-4c37-42d7-b8af-ce220017f51f" />
<img width="874" alt="스크린샷 2025-07-01 오후 4 19 29" src="https://github.com/user-attachments/assets/3fdb3335-ca53-47a7-aa60-02a1f0f9d337" />
<img width="967" alt="스크린샷 2025-07-01 오후 4 19 44" src="https://github.com/user-attachments/assets/4d8d001f-09f0-4d6d-91e4-2328bd7b98e0" />

## 6. 참조를 리턴하는 << 연산자 실습<br>
예제) P358

## 실습 문제
