#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

int main() {

    int numOne, numTwo, numThree;
    int smallestNum;
    char loopAgain ='y';

    cout << "Drew Phillips" << endl;

    while ((loopAgain == 'y') || (loopAgain == 'Y')) {

    cout << "Input 3 values and see the smallest of the 3" << endl;
    cin >> numOne;
    cin >> numTwo;
    cin >> numThree;

    if ((numOne < numTwo) && (numOne < numThree)) {
        smallestNum = numOne;
    } 

    if ((numTwo < numOne) && (numTwo < numThree)) {
        smallestNum = numTwo;
    }

    if ((numThree < numOne) && (numThree < numTwo)) {
        smallestNum = numThree;
    } 

    cout << "The smallest of the 3 values is: " << smallestNum << "." << endl << endl;
    
    cout << "Do you want to run 3 numbers again? y/n" << endl;
    cin >> loopAgain;
    }

   return 0;
}


/*

Write a C++ program to ...

    Read in three integers
    Use an if-else-if structure to output the smallest of the three values
    Loop until the user wants to quit

*/