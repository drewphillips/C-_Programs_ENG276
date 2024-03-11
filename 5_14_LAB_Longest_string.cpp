#include <iostream>
#include <string>
using namespace std;

int main() {
	string str1;
	string str2;
	string longest;
	string shortest;
	
	cout << "Input two strings for size comparison" << endl;
	cin >> str1;
	cin >> str2;

   if (str1.size() == str2.size()) {
      cout << str1 << " and " << str2 << " have the same length" << endl;
   }
   
   if (str1.size() > str2.size()) {
    longest = str1;
    shortest = str2;
    cout << longest << " is longer than " << shortest << endl;
   }
   
   if (str2.size() > str1.size()) {
    longest = str2;
    shortest = str1;
   cout << longest << " is longer than " << shortest << endl;
   }
   

   
   
   return 0;
}


/*

Write a program that takes two strings and outputs the longer string, followed by "is longer than", and the shorter string. If the strings have the same length then output the strings followed by "have the same length".

*/