// Work1Task1Num9.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    int G = 0; // birht year
    int currentYear = 0;
    std::cout << "enter G: ";
    std::cin >> G;
    std::cout << "enter current year: ";
    std::cin >> currentYear;
    int age = currentYear - G;
    if (age >= 11 && age <= 14)
    {
        std::cout << age << " let";
        
    }
    else
    {
        switch (age % 10)
        {
            case 1:
                std::cout << age << " god";
                break;
            case 2:
            case 3:
            case 4:
                std::cout << age << " goda";
                break;
            case 0:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
                std::cout << age << " let";
                break;
        }
    }
}
