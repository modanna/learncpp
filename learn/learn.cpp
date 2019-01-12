#include <iostream>
#include <bitset>

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

void printBool()
{
  std::cout << true << std::endl;
  std::cout << false << std::endl;
  
  std::cout << std::boolalpha; // print bools as true or false
  
  std::cout << true << std::endl;
  std::cout << false << std::endl;
}

void printChar()
{
  char ch(97);
  std::cout << ch << std::endl;
  std::cout << static_cast<int>(ch) << std::endl;
  std::cout << ch << std::endl;
}

void printBitwise()
{
    // // C++14 Define 8 separate bit flags (these can represent whatever you want)
    // const unsigned char option0 = 0b0000'0001; // represents bit 0
    // const unsigned char option1 = 0b0000'0010; // represents bit 1
    // const unsigned char option2 = 0b0000'0100; // represents bit 2 
    // const unsigned char option3 = 0b0000'1000; // represents bit 3
    // const unsigned char option4 = 0b0001'0000; // represents bit 4
    // const unsigned char option5 = 0b0010'0000; // represents bit 5
    // const unsigned char option6 = 0b0100'0000; // represents bit 6
    // const unsigned char option7 = 0b1000'0000; // represents bit 7

    // // C++11 Define 8 separate bit flags (these can represent whatever you want)
    // const unsigned char option0 = 0x1; // hex for 0000 0001 
    // const unsigned char option1 = 0x2; // hex for 0000 0010
    // const unsigned char option2 = 0x4; // hex for 0000 0100
    // const unsigned char option3 = 0x8; // hex for 0000 1000
    // const unsigned char option4 = 0x10; // hex for 0001 0000
    // const unsigned char option5 = 0x20; // hex for 0010 0000
    // const unsigned char option6 = 0x40; // hex for 0100 0000
    // const unsigned char option7 = 0x80; // hex for 1000 0000
	
    // // Define 8 separate bit flags (these can represent whatever you want)
    // const unsigned char option0 = 1 << 0; // 0000 0001 
    // const unsigned char option1 = 1 << 1; // 0000 0010
    // const unsigned char option2 = 1 << 2; // 0000 0100
    // const unsigned char option3 = 1 << 3; // 0000 1000
    // const unsigned char option4 = 1 << 4; // 0001 0000
    // const unsigned char option5 = 1 << 5; // 0010 0000
    // const unsigned char option6 = 1 << 6; // 0100 0000
    // const unsigned char option7 = 1 << 7; // 1000 0000

    // Note that with std::bitset, our options correspond to bit indices, not bit patterns
    const int option0 = 0;
    const int option1 = 1;
    const int option2 = 2;
    const int option3 = 3;
    const int option4 = 4;
    const int option5 = 5;
    const int option6 = 6;
    const int option7 = 7;

    std::bitset<8> bits(0x2); // we need 8 bits, start with bit pattern 0000 0010
    bits.set(option4); // set bit 4 to 1 (now we have 0001 0010)
    bits.flip(option5); // flip bit 5 (now we have 0011 0010)
    bits.reset(option5); // set bit 5 back to 0 (now we have 0001 0010)
 
    std::cout << "Bit 4 has value: " << bits.test(option4) << '\n';
    std::cout << "Bit 5 has value: " << bits.test(option5) << '\n';
    std::cout << "All the bits: " << bits << '\n';
}