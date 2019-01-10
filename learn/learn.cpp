#include <iostream>

int add(int x, int y) {
   return x + y;
}

void printSize()
{
    std::cout << "bool:\t\t" << sizeof(bool) << " bytes" << std::endl;
    std::cout << "char:\t\t" << sizeof(char) << " bytes" << std::endl;
    std::cout << "wchar_t:\t" << sizeof(wchar_t) << " bytes" << std::endl;
    std::cout << "char16_t:\t" << sizeof(char16_t) << " bytes" << std::endl; // C++11, may not be supported by your compiler
    std::cout << "char32_t:\t" << sizeof(char32_t) << " bytes" << std::endl; // C++11, may not be supported by your compiler
    std::cout << "short:\t\t" << sizeof(short) << " bytes" << std::endl;
    std::cout << "int:\t\t" << sizeof(int) << " bytes" << std::endl;
    std::cout << "long:\t\t" << sizeof(long) << " bytes" << std::endl;
    std::cout << "long long:\t" << sizeof(long long) << " bytes" << std::endl; // C++11, may not be supported by your compiler
    std::cout << "float:\t\t" << sizeof(float) << " bytes" << std::endl;
    std::cout << "double:\t\t" << sizeof(double) << " bytes" << std::endl;
    std::cout << "long double:\t" << sizeof(long double) << " bytes" << std::endl;

    std::cout << "size_t (32 or 64 bits):\t" << sizeof(size_t) << " bytes" << std::endl;
}

void printInfNan()
{
    double zero = 0.0;
    double posinf = 5.0 / zero; // positive infinity
    std::cout << posinf << std::endl;

    double neginf = -5.0 / zero; // negative infinity
    std::cout << neginf << std::endl;

    double nan = zero / zero; // not a number (mathematically invalid)
    std::cout << nan << std::endl;
}
