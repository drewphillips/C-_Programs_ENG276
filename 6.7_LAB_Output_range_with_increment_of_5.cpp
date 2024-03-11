#include <iostream>
using namespace std;

int main() {

   int numOne;
   int numTwo;
   int running;
   cout << "Input two numbers and see the values in increments of 5 till the seconed number is reached" << endl;
   
   cin >> numOne;
   cin >> numTwo;

if (numTwo < numOne) {
   cout << "Second integer can't be less than the first." << endl;
}

else {
   
   running = numOne;
   
   do {
      cout << running << " ";
      running = running + 5;
      
   } while (running <= numTwo);
   
   cout << endl;

}      

   return 0;
}


/*

Write a program whose input is two integers, and whose output is the first integer and subsequent increments of 5 as long as the value is less than or equal to the second integer. 

*/