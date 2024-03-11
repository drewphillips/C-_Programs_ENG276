#include <iostream>
#include <iomanip>
using namespace std;

int main() {

double userInput;
double max = 0;
double average;
int numCount;
double sum;

cout << "Enter in any positive values in order to find the max and average of them all, a negitive number ends the program and is not incluedid." << endl;

while (userInput >= 0) {
   cin >> userInput;
   if (userInput < 0) {
      average = sum / numCount;
   }
   
   else {
         
      sum = sum + userInput;
      numCount += 1;
         if (userInput > max) {
         max = userInput;
      }
   }
}


cout << max << " ";
cout << fixed << setprecision(2);
cout << average << endl;

   return 0;
}

/*

Statistics are often calculated with varying amounts of input data. Write a program that takes any number of non-negative integers as input, and outputs the max and average. A negative integer ends the input and is not included in the statistics. Assume the input contains at least one non-negative integer.

Output each floating-point value with two digits after the decimal point, which can be achieved by executing cout << fixed << setprecision(2); once before all other cout statements.

*/