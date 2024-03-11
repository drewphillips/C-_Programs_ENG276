#include <iostream>
#include <string>
using namespace std;

int main() {
   string userString;
   bool isNum = true;
   cin >> userString;
   int i;
   int strLen;
   
   strLen = userString.size();

   for (i=0; i < strLen; ++i) {
      if (!isdigit(userString.at(i))) {
         isNum = false;
         //cout << userString.at(i);
         }
      }
      
   if (isNum == true) {
      cout << "Yes" << endl;
   }
   else {
      cout << "No" << endl;
   }

   return 0;
}


/*

Forms often allow a user to enter an integer. Write a program that takes in a string representing an integer as input, and outputs Yes if every character is a digit 0-9. 

*/