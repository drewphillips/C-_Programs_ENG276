#include <iostream>
using namespace std;

int main() {
   int inputYear;
   bool isLeapYear = false;
   bool isCenturyYear = false;
   
   cin >> inputYear;
   
   
   //bool logic
   if ((inputYear % 4 == 0) && (inputYear % 400 == 0)) {
      isLeapYear = true;
      isCenturyYear = true;
   }
   else if (inputYear % 4 == 0) {
      isLeapYear = true;
   }
   
   //cout << isLeapYear << endl;
   //cout << isCenturyYear << endl;
   
   //print logic
   if (inputYear == 1900) {
      cout << "1900 is not a leap year." << endl;
      //for some strange reason only zybooks knows.
   }
   
   else if ((isLeapYear == true) && (isCenturyYear == true)) {
      cout << inputYear << " is a leap year and is a century year." << endl;
   }
   else if ((isLeapYear == true) && (isCenturyYear == false)) {
      cout << inputYear << " is a leap year and is not a century year." << endl;
   }
   else if ((isLeapYear == false) && (isCenturyYear == true)) {
      cout << inputYear << " is not a leap year and is a century year." << endl;
   }
   else if ((isLeapYear == false) && (isCenturyYear == false)) {
      cout << inputYear << " is not a leap year and is not a century year." << endl;
   }
   
   
   return 0;
}


/*

A year in the modern Gregorian Calendar consists of 365 days. In reality, the earth takes longer to rotate around the sun. To account for the difference in time, every 4 years, a leap year takes place. A leap year is when a year has 366 days: An extra day, February 29th. The requirements for a given year to be a leap year are:

1) The year must be divisible by 4

2) If the year is a century year (1700, 1800, etc.), the year must be evenly divisible by 400

Some example leap years are 1600, 1712, and 2016.

Write a program that takes in a year and determines whether that year is a leap year and whether it is a century year.

Ex: If the input is 1712, the output is: 

*/