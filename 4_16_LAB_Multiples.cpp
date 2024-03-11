/*

Write a program that takes three non-zero integers as input. Output whether the first integer is a multiple of the second integer, a multiple of the third integer or a multiple of the product of the two integers.

*/

#include <iostream>
using namespace std;

int main() {
   
  int num1;
  int num2;
  int num3;
  int product;
  
  cin >> num1;
  cin >> num2;
  cin >> num3;
  
  product = num2 * num3;
  
   if (num1 % num2 == 0) {
     cout << num1 << " is a multiple of " << num2 << "." <<endl;
   }
   
   if (num1 % num3 == 0) {
      cout << num1 << " is a multiple of " << num3 << "."<< endl;
   }  
   if (num1 % product == 0) {
      cout << num1 << " is a multiple of " << product << "." << endl;   
   }
   else if ((num1 % num2 != 0) && (num1 % num2 != 0) && (num1 % product != 0)) {
     cout << num1 << " is not a multiple of " << num2 << ", " << num3 << ", or " << product << "." << endl;
   }
   
   return 0;
}
