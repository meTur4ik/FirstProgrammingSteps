// Work1Task2Num9.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>

int main()
{
    int phiVariant = 0;
    double z = 0;
    std::cout << "enter phi variant (1, 2 or 3): ";
    std::cin >> phiVariant;
    std::cout << "enter x: ";
    std::cin >> z;

    double x = 0;
    if (z <= 0)
        x = z * z / 2;
    else
        x = sqrt(z);

    double phi = 0;
    switch (phiVariant)
    {
        case 1:
            phi = 2 * x;
            break;
        case 2:
            phi = x * x;
            break;
        case 3:
            phi = x / 3.;
            break;
        default:
            std::cout << "go fuck yourself";
            return -1;
    }

    double a = 2;
    double b = 3;
    double y = (b * phi / cos(x)) + a * log(abs(tan(x / 2)));
    std::cout << "y is " << y << std::endl;
}
