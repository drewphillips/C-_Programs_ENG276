#include <iostream>
#include <string>
using namespace std;

int main() {
   string userText;
   int numChar = 0;
   int numPuncts = 0;
   int i;
   int strLen;
   
   getline(cin, userText);  // Gets entire line, including spaces. 
   
   cout << "Enter in a line of text to find out how many non end of sentance charicters are in it, and how many '.', '?', and '!' are in the text" << endl;
   strLen = userText.size();
   
   for (i=0; i < strLen; ++i) {
      if ((userText.at(i) != '.') && (userText.at(i) != '?') && (userText.at(i) != '!')) {
         numChar += 1;
      }
      else if ((userText.at(i) == '.') || (userText.at(i) == '?') || (userText.at(i) == '!')) {
         numPuncts += 1;
      }
   }
   
   
   
   cout << numChar << endl;
   cout << numPuncts << endl;

   return 0;
}


/*

Given a line of text as input: (1) output the number of characters excluding the three characters commonly used for end-of-sentence punctuation (period, question mark, and exclamation point), (2) then output the number of end-of-sentence punctuation characters that were found. You can just do (1) to pass the first few test cases for partial credit, then do (2) for full credit. 


*/