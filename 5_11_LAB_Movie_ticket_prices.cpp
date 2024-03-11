#include <iostream>
using namespace std;

int main() {

   string dayOrNight;
   int age;
   int price;
   char dOrA;
   //int number;
   
   cout << "Enter if its 'day' or 'night'." << endl;
   cin >> dayOrNight;
   cout << "Enter your age" << endl;
   cin >> age;
   
   //number = (dayOrNight.length());
   
   if ((dayOrNight.length() <= 3)) {
      dOrA = 'D';
   }
   else {
      dOrA = 'N';
   }
   
   switch (dOrA) {
      case 'D':
      if (age < 4) {
         cout << "free" << endl;
      }
         else {
            price = 8;
            cout << "$" << price << endl;
         }
      //Daytime prices are $8 for everyone age 4 or higher.
      break;
      
   case 'N':
   
      if (age < 4) {
         cout << "free" << endl;
         
      }
      else if ((age >=4) && (age < 17)) {
         price = 12;
         cout << "$" << price << endl;
      }
      else if ((age >= 17) && (age < 55)) {
         price = 15;
         cout << "$" << price << endl;
      }
      else {
         price = 13;
      
       cout << "$" << price << endl;
         }
       
      //Nighttime prices are $12 for ages 4 - 16, $15 for ages 17 - 54 and $13 for ages 55 and above. 
   break;
   }
   
  
   

   return 0;
}


/*

Write a program that takes in a string that holds the values "day" or "night" and an integer that holds a person's age, and outputs a movie ticket price. Movie prices are free for everyone under the age of 4. Daytime prices are $8 for everyone age 4 or higher. Nighttime prices are $12 for ages 4 - 16, $15 for ages 17 - 54 and $13 for ages 55 and above. 

*/