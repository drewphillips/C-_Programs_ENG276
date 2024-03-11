#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {

   string str1;
  
  while (true) {
     
     cout << "Enter in any number of strings to be reviersed and printed" << endl;
     cout << "Enter Done, done, or d, to exit" << endl;
     getline(cin, str1);
     
     if ((str1 == "done") || (str1 == "Done") || (str1 == "d")) { 
      break;
  
  }
   
   reverse(str1.begin(), str1.end());
   
   cout << str1 << endl;
   
} 

   return 0;
}


/*

Write a program that takes in a line of text as input, and outputs that line of text in reverse. The program repeats, ending when the user enters "Done", "done", or "d" for the line of text. 

*/
