#include "functions.h"
#include <iostream>

extern "C" __declspec(dllexport) void print()
{
    std::cout << "dorova from dll" << std::endl;
}
