# 9장 가상 함수와 추상 클래스
***
## 목차
[1. 상속 관계에서의 함수 재정의](#1-상속-관계에서의-함수-재정의)<br>
[2. 가상 함수와 오버라이딩](#2-가상-함수와-오버라이딩)<br>
[3. 가상 함수와 오버라이딩의 활용 사례](#3-가상-함수와-오버라이딩의-활용-사례)<br>
[4. 추상 클래스](#4-추상-클래스)
***
+ **25년 7월 3일**
## 1. 상속 관계에서의 함수 재정의<br>
예제) P426 <br>
## 2. 가상 함수와 오버라이딩<br>
예제) P431 <br>
<img width="925" alt="스크린샷 2025-07-01 오후 4 30 58" src="https://github.com/user-attachments/assets/4ff0342e-d357-41c2-956e-ad7e170c1ef1" />
<img width="930" alt="스크린샷 2025-07-01 오후 4 31 30" src="https://github.com/user-attachments/assets/075748b5-e126-476a-bc06-118386acea84" />
<img width="864" alt="스크린샷 2025-07-01 오후 4 31 40" src="https://github.com/user-attachments/assets/9ffa411a-5f79-4685-9b2b-83ae5e72607e" />
<img width="907" alt="스크린샷 2025-07-01 오후 4 31 56" src="https://github.com/user-attachments/assets/25e5004b-020d-4b7a-815e-9d07279e30b6" />
<img width="815" alt="스크린샷 2025-07-01 오후 4 32 10" src="https://github.com/user-attachments/assets/e5602d35-b170-471c-a01f-2a54b775c34d" />

+ 과거의 기술이 아닌 미래의 만드는 기술을 사용하기 위해 virtual 함수 사용.

<img width="975" alt="스크린샷 2025-07-01 오후 4 32 43" src="https://github.com/user-attachments/assets/8733f97c-b513-4d35-9035-562a8eeee8c3" />
<img width="937" alt="스크린샷 2025-07-01 오후 4 33 16" src="https://github.com/user-attachments/assets/6fc5eee9-cbaf-40a1-aaba-c9b62277196b" />
<img width="918" alt="스크린샷 2025-07-01 오후 4 33 30" src="https://github.com/user-attachments/assets/c34468a6-c1f5-4e7b-b895-92f090b0c2bb" />
<img width="926" alt="스크린샷 2025-07-01 오후 4 33 49" src="https://github.com/user-attachments/assets/92cce17d-ec15-4b75-a344-8696efa7d2d2" />
<img width="943" alt="스크린샷 2025-07-01 오후 4 34 09" src="https://github.com/user-attachments/assets/efa0633d-ec67-459b-811a-44d2230f8c33" />

#### 정적 바인딩 vs. 동적 바인딩
바인딩(Binding)은 프로그램에서 사용된 식별자(변수, 함수 이름 등)를 그것이 실제로 가리키는 메모리 주소나 코드에 연결하는 과정입니다. C++에서는 이 과정이 컴파일 시점에 일어나는지, 런타임에 일어나는지에 따라 정적 바인딩과 동적 바인딩으로 나뉩니다.

| 특징 | 정적 바인딩 (Static Binding) | 동적 바인딩 (Dynamic Binding) |
| --- | --- | --- |
| **결정 시점** | 컴파일 시점 (Compile-time) | 실행 시점 (Runtime) |
| **결정 기준** | 포인터/참조의 선언된 타입 (Static Type) | 포인터/참조가 실제로 가리키는 객체의 타입 (Dynamic Type) |
| **대상 함수** | 일반 함수, 오버로딩된 함수, `virtual`이 아닌 멤버 함수 | `virtual` 멤버 함수 |
| **성능** | 빠름 (런타임 오버헤드 없음) | 약간의 오버헤드 발생 (V-table 조회) |
| **유연성** | 낮음 (코드가 고정됨) | 높음 (객체 타입에 따라 동작 변경 가능) |

```cpp
#include <iostream>

class Base 
{
public:
    void static_func() { std::cout << "Base::static_func() - (정적 바인딩)" << std::endl; }
    virtual void dynamic_func() { std::cout << "Base::dynamic_func() - (동적 바인딩)" << std::endl; }
    virtual ~Base() {}
};

class Derived : public Base 
{
public:
    void static_func() { std::cout << "Derived::static_func() - (정적 바인딩)" << std::endl; }
    void dynamic_func() override { std::cout << "Derived::dynamic_func() - (동적 바인딩)" << std::endl; } // override 없어도 됨.
};

int main() 
{
    Base* p = new Derived();

    // 포인터 타입(Base*)을 따라 컴파일 시점에 호출 함수가 결정됨
    p->static_func();   // 출력: Base::static_func() - (정적 바인딩)

    // 런타임에 실제 객체 타입(Derived)을 따라 호출 함수가 결정됨
    p->dynamic_func();  // 출력: Derived::dynamic_func() - (동적 바인딩)

    delete p;
    return 0;
}
```

#### 매개변수의 다형성 (Parameter Polymorphism)
매개변수의 다형성이란, 함수가 **부모 클래스의 포인터나 참조(Reference)를 매개변수로 받도록** 설계하여, 실제로는 그 부모를 상속하는 **어떤 자식 객체든** 전달받아 처리할 수 있게 하는 객체 지향 프로그래밍의 중요한 특징입니다. 이를 통해 하나의 함수가 다양한 타입의 객체를 일관된 방식으로 처리할 수 있습니다.

**핵심 원리:**
1.  **업캐스팅(Upcasting)**: 자식 클래스의 객체를 부모 클래스의 포인터나 참조로 가리킬 수 있습니다.
2.  **동적 바인딩**: 함수 호출 시, 포인터의 선언된 타입(부모)이 아닌 **실제 가리키는 객체(자식)의 오버라이딩된 가상 함수**가 실행 시점에 호출됩니다.

**예시 코드:**
```cpp
#include <iostream>

// 부모 클래스
class Character {
public:
    virtual void attack() const {
        std::cout << "캐릭터가 공격합니다." << std::endl;
    }
    virtual ~Character() {}
};

// 자식 클래스 1
class Knight : public Character {
public:
    void attack() const override {
        std::cout << "기사가 검으로 공격합니다!" << std::endl;
    }
};

// 자식 클래스 2
class Archer : public Character {
public:
    void attack() const override {
        std::cout << "궁수가 활을 쏩니다!" << std::endl;
    }
};

// 매개변수의 다형성을 활용하는 함수
// Character의 참조를 매개변수로 받아 Character를 상속하는 모든 객체를 처리
void performAttack(const Character& character) {
    character.attack(); // 여기서 다형성이 발현됨
}

int main() {
    Knight knight;
    Archer archer;

    std::cout << "기사 공격: ";
    performAttack(knight); // Knight 객체 전달

    std::cout << "궁수 공격: ";
    performAttack(archer); // Archer 객체 전달

    return 0;
}
```
**장점:**
- **유연성 및 확장성**: 나중에 `Wizard` 같은 새로운 직업 클래스를 추가해도 `performAttack` 함수는 수정할 필요 없이 그대로 사용할 수 있습니다.
- **코드 중복 감소**: `attackKnight(knight)`, `attackArcher(archer)`처럼 각 클래스마다 함수를 만들 필요가 없습니다.

#### 런타임 다형성 (Runtime Polymorphism)
+ **정의**: 프로그램 실행 중에 어떤 함수가 호출될지 결정되는 다형성입니다. C++에서는 가상 함수(virtual function)를 통해 구현됩니다.
+ **작동 원리**: 기반 클래스의 포인터나 참조가 파생 클래스의 객체를 가리킬 때, 가상 함수를 호출하면 실제로 가리키는 객체의 오버라이딩된 함수가 호출됩니다. 이는 컴파일 시간이 아닌 실행 시간에 결정됩니다.

#### 가상 함수 테이블 (Virtual Function Table)
+ **정의**: 가상 함수를 하나 이상 포함하는 클래스에 대해 컴파일러가 생성하는 정적인 함수 포인터 배열입니다. 각 클래스마다 하나의 가상 함수 테이블이 존재합니다.
+ **vptr (virtual pointer)**: 클래스가 가상 함수를 가지고 있으면, 컴파일러는 `vptr`이라는 숨겨진 포인터를 클래스에 추가합니다. 해당 클래스의 각 객체는 이 `vptr`을 포함하며, `vptr`은 해당 클래스의 가상 함수 테이블을 가리킵니다.
+ **함수 호출 과정**: 기반 클래스 포인터나 참조를 통해 가상 함수를 호출하면, 프로그램은 객체의 `vptr`을 사용하여 올바른 가상 함수 테이블을 찾습니다. 그런 다음 해당 테이블에서 적절한 함수 포인터를 찾아 함수를 호출합니다. 이 메커니즘을 통해 런타임에 객체의 실제 유형에 따라 올바른 함수가 호출될 수 있습니다.

**가상 함수 테이블 다이어그램:**
```
+--------------------+                +---------------------------+
|   Base Object      |                |      VTable for Base      |
|--------------------|                |---------------------------|
| vptr               |--------------->| &Base::function1          |
| m_base_data        |                | &Base::function2          |
+--------------------+                +---------------------------+


+--------------------+                +---------------------------+
|  Derived Object    |                |     VTable for Derived    |
|--------------------|                |---------------------------|
| vptr               |--------------->| &Derived::function1       |  // Overridden
| m_base_data        |                | &Base::function2          |  // Inherited
| m_derived_data     |                | &Derived::function3       |  // New
+--------------------+                +---------------------------+
```

#### final 키워드
+ final 키워드는 상속 계층에서 특정 지점을 '마지막'으로 지정하여 더 이상의 확장(상속 또는 오버라이딩)을 금지할 때 사용함.
+ 가상 함수에 사용: 해당 가상 함수가 더 이상 하위 클래스에서 오버라이딩될 수 없음을 명시. 이를 통해 함수의 동작을 고정시킬 수 있음.
+ 클래스에 사용: 해당 클래스가 더 이상 다른 클래스에 의해 상속될 수 없음을 명시

예시)
```cpp
class Intermediate : public Base 
{
public:
    // final_feature를 오버라이딩하면서 final로 지정.
    // 이제 Intermediate를 상속하는 클래스는 final_feature를 오버라이딩할 수 없음.
    void final_feature() override final 
    { 
        std::cout << "This feature is finalized." << std::endl;
    }
};

// 이 클래스는 상속될 수 없음.
class MyFinalClass final {}; 
// class WontWork : public MyFinalClass {}; // 컴파일 에러!
```

## 3. 가상 함수와 오버라이딩의 활용 사례<br>
예제) P447, Test(업케스팅과 virtual함수를 이용한 매개변수의 다형성 예제) <br>
<img width="969" alt="스크린샷 2025-07-01 오후 4 34 30" src="https://github.com/user-attachments/assets/8291184a-8867-43d5-9ed4-01960b6d6a95" />
<img width="814" alt="스크린샷 2025-07-01 오후 4 35 02" src="https://github.com/user-attachments/assets/ab272751-890a-45a0-91d6-a6766982c19c" />
<img width="936" alt="스크린샷 2025-07-01 오후 4 35 22" src="https://github.com/user-attachments/assets/d1a398f7-05a7-4f66-b88c-67c68b543c7e" />
<img width="936" alt="스크린샷 2025-07-01 오후 4 35 37" src="https://github.com/user-attachments/assets/184c1084-89d1-4cfc-9702-1c715c41de1a" />
<img width="888" alt="스크린샷 2025-07-01 오후 4 35 52" src="https://github.com/user-attachments/assets/5ce08a6d-6385-45f1-9076-a088f2f6b707" />

+ **25년 7월 4일**

## 4. 추상 클래스<br>
예제) P454, P455, TestPure <br>
<img width="823" alt="스크린샷 2025-07-01 오후 4 36 07" src="https://github.com/user-attachments/assets/13603657-8c09-41e9-bd73-4febd2013f3b" />
<img width="902" alt="스크린샷 2025-07-01 오후 4 36 24" src="https://github.com/user-attachments/assets/766a2259-00d9-46f9-ad92-e55fce2cbf99" />
<img width="902" alt="스크린샷 2025-07-01 오후 4 36 37" src="https://github.com/user-attachments/assets/03c42243-42cf-47ae-8627-4aea4b4bdfb5" />
<img width="1007" alt="스크린샷 2025-07-01 오후 4 36 56" src="https://github.com/user-attachments/assets/c12296ae-0a37-4370-b6da-c4f0135035e0" />

+  파생 클래스가 추상 클래스인 기본 클래스를 상속받을 때, 기본 클래스에 선언된 모든 순수 가상 함수(pure virtual function)를 오버라이딩하여 구현해야만 해당 파생 클래스가 객체를 생성할 수 있는 구체적인(concrete) 클래스가 된다.
+ 만약 파생 클래스가 순수 가상 함수 중 하나라도 오버라이딩하지 않으면, 해당 파생 클래스 또한추상 클래스가 되어 직접 객체를 생성할 수 없음.
+ 일반 가상 함수(순수 가상 함수가 아닌, 구현부가 있는 가상 함수)는 오버라이딩이 필수는 아니지만, 파생 클래스에서 특정 동작을 재정의하고 싶을 때 오버라이딩함.
<img width="946" alt="스크린샷 2025-07-01 오후 4 37 26" src="https://github.com/user-attachments/assets/7722c3dd-eecb-42cc-b5a9-4363237882e1" />
