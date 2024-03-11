#include <iostream>
#include <iomanip>
#include <cmath>
#include <cctype>
#include <string>
using namespace std;

int main()
{

    string str1;
    string str2;
    string str3;
    string str4;
    string str5;

    cout << "Drew Phillips" << endl << endl;

    cout << "Enter and animal name" << endl;
    cin >> str1;
    cout << "Enter in a color" << endl;
    cin >> str2;
    cout << "Enter in an action" << endl;
    cin >> str3;

    cout << "The 4th letter in your animal is: " << str1.at(3) << endl;
    cout << "The length of your color is: " << str2.size() << endl;
    str2.append(" ");
    str4 = str2.append(str1);
    cout << "Appendiong... " << str4 << endl;
    
    if (str3.find('c')!= string::npos) {
        cout << "c is at the index " << str3.find('c') << " of " << str3 << endl;

    }
    else {
        cout << "c is not found in " << str3 << endl;
    }
 
    str1.append(" ");
    str2.append(" ");
    str5 = str2 + str3;
    cout << str5 << endl;   

    return 0;
}


/*

Write a C++ program to ...

    read an animal into str1, a color into str2, and an action into str3 (action ends in "ing")
    print out the 4th letter in animal string:  "4th letter in Cardinal is d"
    print out the length of the color string:  "Crimson has length 7"
    append and print out the color and animal strings:  "Purple Butterfly"
    find and print out the index of the letter c in the action string:  "c is in index 4 of Perching"  or "c is not found in Darting"
    return and print a new string that combines color, animal and action: "Orange Tiger Roaring"

*/
