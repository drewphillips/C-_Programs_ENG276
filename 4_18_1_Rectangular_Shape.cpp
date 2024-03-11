#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std;

int main() {

    double length, width;
    char loopAgain = 'y';
    int userChoice;
    double area;
    double perimeter;
    double diagonal;

    cout << "Drew Phillips" << endl;

    while ((loopAgain == 'y') || (loopAgain == 'Y')) {

    cout << "Enter in the Length and the Width" << endl;

    cin >> length;
    cin >> width;

    cout << "What calulation would you like to do?" << endl;
    cout << "1) Area" << endl;
    cout << "2) Perimeter" << endl;
    cout << "3) Diagonal" << endl;

    cout << fixed << setprecision(2);
    area = length * width;
    perimeter = 2 * (length + width);
    diagonal = sqrt(pow(length, 2) + pow(width, 2));

    cin >> userChoice;

    if (userChoice == 1) {

        cout << area << endl; 
    }

    else if (userChoice == 2) {

        cout << perimeter << endl;
    }

    else if (userChoice == 3) {

        cout << diagonal << endl;
    }

    else {
        cout << "You can only select 1, 2, or 3, please try again" << endl;
    }

    cout << "Would you like to calulate a new requtangel? y/n" << endl;
    cin >> loopAgain;

    }
   return 0;
}


/*

Write a C++ program to 

    read in a length, width
    select from a menu: area, perimeter or diagonal
    using an if-else-if structure and based on menu selection, calculate and print results to 2 decimal places
    loop until the user wants to quit

*/