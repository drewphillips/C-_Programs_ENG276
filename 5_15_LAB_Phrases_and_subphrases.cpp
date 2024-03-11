#include <iostream>
#include <string>
using namespace std;

int main() {

   string str1;
   string str2;
   int strLen;
   int q;
   bool contains;
   
   int options;
   
   getline(cin, str1);
   getline(cin, str2);
   
   contains = false;
   
   
    if (str1.size() < str2.size()) {
   strLen = str1.size();
   }
   else {
      strLen = str2.size();
   }
   
   //cout << strLen;
   

   if ( str1.size() == str2.size() ) {
      options = 1;
   }
   else if ( str1.size() < str2.size() ) {
      options = 2;
   }
   else if ( str1.size() > str2.size() ) {
      options = 3;
   }
   else {
      options = 4;
   }
   
   switch (options) {
         case 1:
    
            if (str1.size() == str2.size()) {
            cout << "Both phrases match" << endl;
            }   
    
         break;
    
         case 2:
         // they dont have the same amount of letter but one contains in the other.  
    
            for (q=0; q < strLen; q++) {
      
            if (str2.find("str1[q], [q]") ) {
            contains = true;
            }
            }     
   
            if (contains == true) {
            cout << str1 << " is found within " << str2 << endl;
            }
    
    
         break;
    
         case 3:
         for (q=0; q < strLen; q++) {
      
            if (str1.find("str2[q], [q]") ) {
            contains = true;
            //cout << str2[q] << " ";
            }
            //cout << str1 << " is found within " << str2 << endl;

         }
   
         if (contains == true) {
         cout << str2 << " is found within " << str1 << endl;
         }
    
         break;
   
   
         case 4: {
         cout << "No match" << endl;
   
         }
         break;
   }


   return 0;
}


/*

Write a program that reads two phrases on separate lines and outputs one of the four responses:

1) Phrase one is found within phrase two

2) Phrase two is found within phrase one

3) Both phrases match

4) No matches

Hint: Use the string function find().

*/