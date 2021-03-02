#include <iostream>

class A
{
private:
    int _age;
public:
    int Age;

    A(int a, int b)
    {
        _age = a;
        Age = b;
    }

    A(const A& other)
    {
        this->_age = other._age;
        this->Age = other.Age;
    }

    int get_age() { return _age; }
};

void main()
{
    A a(1, 2);
    A b(a);
    std::cout << b.get_age() << std::endl;
    std::cin.get();
}