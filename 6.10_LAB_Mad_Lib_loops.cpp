#include <iostream>
#include <string>
using namespace std;

int main() {

   string madLib;
   int num;
   int stop;
   
   while (stop != 1) {
      
      cin << "Enter in your Mad Lis word and a number" << endl;
      cin >> madLib;
      cin >> num;
      
      if (madLib != "quit") {
         cout << "Eating " << num <<  " " << madLib <<  " a day keeps you happy and healthy." << endl;
      }
      else {
         stop = 1;
      }
   }
   return 0;
}


/*

Mad Libs are activities that have a person provide various words, which are then used to complete a short story in unexpected (and hopefully funny) ways.

Write a program that takes a string and an integer as input, and outputs a sentence using the input values as shown in the example below. The program repeats until the input string is quit and disregards the integer input that follows. 

*/