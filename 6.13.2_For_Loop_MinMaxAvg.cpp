#include <iostream>
#include <iomanip>
#include <cmath>
#include <cctype>
#include <string>
using namespace std;

int main()
{
    char loopAgain;
    int i;
    int n;
    double userNum;
    double max = -9999;
    double min = 9999;
    double sum;
    double average;

    cout << "Drew Phillips" << endl << endl;

    do {
        //reset
        sum = 0;
        max = -9999;
        min = 9999;

        cout << "How many numbers will you be entering? " << endl;
        cin >> n;
        for (i=1; i <= n; i++) {
            cout << "Value = ";
            cin >> userNum;
            
                if (userNum < min) {
                    min = userNum;
                }
                if (userNum > max) {
                    max = userNum;
                }
                sum = sum + userNum;
        }
        average = sum / n;
        cout << "The max number is: " << max << endl;
        cout << "The min number is: " << min << endl;
        cout << "The Average is: " << average << endl;


        cout << "Do you wantto run the program again? y/n" << endl;
        cin >> loopAgain;
        loopAgain = tolower(loopAgain);

    } while (loopAgain == 'y');

    return 0;
}


/*

Write a C++ program to work with data.  Your program must ..

    use a for loop to read in N data values
    Calculate and print a minimum
    Calculate and print a maximum
    Calculate and print an average
    Use a do-while to loop until the user wants to quit

*/

