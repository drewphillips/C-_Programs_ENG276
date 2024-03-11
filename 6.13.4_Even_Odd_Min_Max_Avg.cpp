#include <iostream>
#include <iomanip>
#include <cmath>
#include <cctype>
#include <string>
using namespace std;

int main()
{
    int userNum;
    int evenMin = 9998;
    int evenMax = -9998;
    double evenAvg;
    int oddMin = 9998;
    int oddMax = -9998;
    double oddAvg;
    double evenTot;
    double oddTot;
    int oddNumCount = 0;
    int evenNumCount = 0;
    int isOdd;
    int isEven;

    cout << "Drew Phillips" << endl << endl;
    cout << "Enter Numbers one at a time to calculate the Min and max of both even and odd numbers." << endl;
    cout << "The average of both the even and odd numbers will also be calculated and printed" << endl;
    cout << "Enter '9999' to exit the program" << endl;
    do {

        cout << "Enter next number: " << endl;
        cin >> userNum;

        if ((userNum % 2 == 0 ) && (userNum != 9999))  {
            isEven = userNum;
            evenTot = evenTot + userNum;
            evenNumCount += 1;
            cout << "is even: " << isEven << endl;  
                if (isEven < evenMin) {
                    evenMin = isEven;
                }
                if (isEven > evenMax) {
                    evenMax = isEven;
                }
        }
        
        else if (((userNum % 2 != 0) && (userNum != 9999))) {
            isOdd = userNum;
            oddTot = oddTot + isOdd;
            oddNumCount += 1;
                if (isOdd < oddMin) {
                    oddMin = isOdd;
                }
                if (isOdd > oddMax) {
                    oddMax = isOdd;
                }
        }
    } while (userNum != 9999);

        //printing results
        evenAvg = evenTot / (evenNumCount);
        oddAvg = oddTot / (oddNumCount);
        
        cout << "The even Min is: " << evenMin << endl;
        cout << "The Even Max is: " << evenMax << endl;
        cout << "The even average is: " << evenAvg  << endl;
        cout << "The odd Min is: " << oddMin << endl;
        cout << "The odd Max is: " << oddMax << endl;
        cout << "The odd average is: " << oddAvg << endl;

    return 0;
}


/*

Write a C++ program to ...

    Read in a list of integers until a sentinel value (9999) is entered
    Arrays are explicitly forbidden.  Do not use arrays or vectors.
    Calculate and print the min/max/avg of integers that are even
    Calculate and print the min/max/avg of integers that are odd

*/