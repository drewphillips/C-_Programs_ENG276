#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
   
   string userText;
   //string newStr;
   int strLen;
   int i;
   int j = 0;
   int charNum = 0;
   char charHold;
   
   getline(cin, userText);
   
   strLen = userText.size();
   string newStr;
   
   for (i=0; i < strLen; ++i) {
      if (isalpha(userText.at(i))) {
            charNum += 1;
            charHold = userText.at(i);
            //cout << charHold << endl;
            newStr.push_back(charHold);
            ++j;
      }
      
   }
   
   //cout << charNum << endl;
   //cout << userText << endl;
   cout << newStr << endl;
   return 0;
}


/*

Write a program that removes all non alpha characters from the given input. 

*/