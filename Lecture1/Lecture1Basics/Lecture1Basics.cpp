// Lecture1Basics.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.

#include <iostream>
#include <conio.h>

struct Person
{
    char name[30];
    int citizenship;
    int age;
};

int main()
{
    bool a; // boolean
    char c; // character
    short s; // 2 chars
    signed int i = -2; // integer
    int i = -2;
    long l;
    long long ll;

    float f;
    double d;
    

    unsigned int uint = -2; // uint32_t size_t

    char dorova[3];
    std::cin.get(dorova, 3);
    std::cout << dorova << std::endl;

    std::cout << i << std::endl;
    std::cout << uint << std::endl;

    std::cin >> f;
    std::cout << f << std::endl;

    _getch();

    uint = 5;
    uint <<= 1;
    std::cout << uint << std::endl;

    _getch();

    unsigned int another_uint = 10;
    another_uint = uint ^ another_uint;
    std::cout << another_uint << std::endl;

    _getch();

    std::cout << sizeof(ll) << std::endl;
    std::cout << sizeof(i) << std::endl;
    std::cout << sizeof(uint) << std::endl;
    std::cout << sizeof(c) << std::endl;

    _getch();

    Person p;
    p.age = 20;
    std::cout << p.age << std::endl;

    Person* p1 = new Person();
    std::cout << p1->age << std::endl;
    delete p1;

    std::shared_ptr<Person> p2(new Person());
    p2->citizenship = 50;
    std::cout << p2->citizenship << std::endl;
}
