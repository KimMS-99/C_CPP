# C++ 평가

문항\) 추상클래스의 기본 클래스와 파생클래스 구현
* 구현 조건

1. 기본 Animal 클래스는 name, age 멤버 변수를 선언하고 생성자에 의해 초기화 한다.<br>
    멤버변수 값을 읽을 수 있는 setter, getter 함수를 구현한다.<br>
    동물이 달리는 기능은 전역 함수로 작성하고 프렌드 함수로 구현한다.
```cpp
    void running(코드 작성) //  run() 에서 호출
    {
        cout << 코드 작성 << "가 달린다" << endl;   
    }
```
    동물이 우는 기능은 순수 가상함수로 선언 후 파생클래스에서 구현한다.( void crying() - run()함수에서 호출 )

2. 파생 클래스는 Dog, Cat 두개의 클래스로 구현한다.<br>
    파생 클래스는 동물 울음소리를 저장하는 bark 멤버 변수를 선언하고 생성자에서 초기화하고 setter, getter 함수를 구현한다.

3. 매개변수의 다형성을 확인하기 위해 동물이 달리는 기능은 외부함수를 구현한다. ( void run() )

4. 기본(default) 복사생성자를 클래스에 직접 구현한다.

5. main() 함수는 아래와 같이 작성하여 출력결과와 동일하게 구현한다.
```cpp
int main()
{
    cout << "--추상클래스와 파생 클래스 구현--\n";
    Dog *dog = new Dog("강아지", 4, "멍멍");
    Cat *cat = new Cat("고양이", 2, "야옹");

    cout << "--매개 변수의 다형성 구현--\n";
    run(dog);
    run(cat);

    cout << "\n--복사생성자 직접 구현--\n";
    Dog copyDog(*dog);
    cout << copyDog.getName() << endl;
    cout << copyDog.getAge() << endl;
    cout << copyDog.getBark() << endl;

    cout << "\n--소멸자실행--\n";
    delete dog;
    delete cat;

    return 0;
}
```

+ 출력 결과
<img width="494" alt="스크린샷 2025-07-04 오후 3 14 05" src="https://github.com/user-attachments/assets/0ed984ff-9fe1-41de-b165-5e8c7e890158" />
