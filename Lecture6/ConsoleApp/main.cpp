#include <iostream>
#include <Windows.h>

int main()
{
    auto lib = LoadLibrary(L"ExampleDLL.dll");
    if (!lib)
    {
        std::cout << "failed to load dll" << std::endl;
        return EXIT_FAILURE;
    }

    auto print = GetProcAddress(lib, "print");
    if (!print)
    {
        std::cout << "failed to load function" << std::endl;
        return EXIT_FAILURE;
    }
    print();
    std::cout << "dorova" << std::endl;
    std::cin.get();
    return 0;
}
