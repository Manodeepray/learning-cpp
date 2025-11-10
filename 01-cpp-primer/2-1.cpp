// Type Meaning Minimum Size
// bool boolean NA
// char character 8 bits
// wchar_t wide character 16 bits
// char16_t Unicode character 16 bits
// char32_t Unicode character 32 bits
// short short integer 16 bits
// int integer 16 bits
// long long integer 32 bits
// long long long integer 64 bits
// float single-precision floating-point 6 significant digits
// double double-precision floating-point 10 significant digits
// long double extended-precision floating-point 10 significant digits

#include <iostream>
#include <cstdio>

using namespace std;


int main(){
   //  bool b = 42; // b istrue
   //int i = b; //i has value 1
   // i = 3.14; //i has value 3
   // double pi = i; //pi has value 3.0
   // unsigned char c = -1; // assuming 8-bit chars,c has value 255
   // signed char c2 = 256; // assuming 8-bit chars, the value of c2 is undefined

    //cout<<c2<<endl;

    //for (float i = 10; i >= 0; --i)
    //	std::cout << i << std::endl;	
		
    unsigned u = 10, u2 = 42;

	std::cout << u2 - u << std::endl;
	std::cout << u - u2 << std::endl;
	int i = 10, i2 = 42;
	std::cout << i2 - i << std::endl;
	std::cout << i - i2 << std::endl;
	std::cout << i - u << std::endl;
	std::cout << u - i << std::endl;

}
