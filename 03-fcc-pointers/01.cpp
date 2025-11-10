// int a = 4 bytes
// char c = 1 byte
// float f = 4 bytes
// pointers are ariable that store the address of another ariable
//
// a=4 ; &a = 204
// p = &a . i.e 204
//
// 
// int a = 5;
// int *p;
// p = &a; # p-> address of a
// print p --> address of a= 204
// print a -->  5 -->value of a 
// print &a --> 204
// print &p --> 64 --> address of pointer p
// 
//
// print *p --> 5 ## Called dereferencing
// 
// if we do ,
// *p = 8
// now a = 8
//

#include <iostream>
using namespace std;

int main(){
  
  int a;
  int *p;
  p = &a;


  a = 100;
  std::cout << p<< endl;
  std::cout << *p<< endl;

  *p = 10;
  std::cout << p<< endl;
std::cout << *p<<endl;

  return 0 ;
}


