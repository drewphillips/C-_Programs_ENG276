#include <iostream>
using namespace std;

int main() {
   
  int num1;
  int num2;
  int num3;
  int count = 0;
  int smallest;
  
  cin >> num1;
  cin >> num2;
  cin >> num3;
  
  if ((num1 >= num2) && (num1 >= num3)) {
   count +=1;
   smallest = num1;
  }
  if ((num2 >= num1) && (num2 >= num3)) {
   count +=1;
   smallest = num2;
  }
  if ((num3 >= num1) && (num3 >= num2)) {
   count +=1;
   smallest = num3;
  }
  cout << smallest << endl;
  cout << count << endl;
   return 0;
}