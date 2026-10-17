#include <iostream>
using namespace std;
int main(){
   // A Pointer is a variable that stores the memory address of another variable.
   //a-1 block of 4 bytes, address-2002, value=5
   // b-1 block of 4 bytes, address-5003,value=2.1
   //c-1 block of <> byttes, adress-1001, value=<2002>
   //d-1 block of <> bytes , adress =9002 , value=<5003>
   int a=5;
   float b=2.1;
   int*c; // pointer-to-integer
   c=&a;
   float*d=&b; // pointer-to-float
   int arr[10]; // {1,1,1,1,1,1,.....}
   return 0;




}