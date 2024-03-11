#include <iostream>
#include <iomanip>
#include <cmath>
#include <cctype>
#include <string>
using namespace std;

int main()
{
    char loopAgain;
    int numbers = -9999;
    int max = -9999; 
    int min = 9999;
    int runingTot = 0;
    int numCount = 0;
    double average = 0;

    cout << "Drew Phillips" << endl << endl;

    do { 
        numbers = -9999;
        runingTot = 0;
        numCount = 0;
        average = 0;
        min = 9999;
        max = -9999;
        
        cout << "Enter in a list of intagers until you want ot stop and enter 9999" << endl;
        
        while (numbers != 9999) { 
        cout << "Enter a new number" << endl;
        cin >> numbers;
            if (numbers < min) {
                min = numbers;
            }
            if ((numbers > max) && (numbers != 9999)) {
                max = numbers;
            }
            if (numbers != 9999) {
                numCount = numCount + 1;
                runingTot = runingTot + numbers;
            }

        }

        average = static_cast<double>(runingTot) / numCount;
        cout << "The Minimum is: " << min << endl;
        cout << "The Maximum is: " << max << endl;
        cout << "The average is: " << average << endl << endl;
        
        cout << "Do you want to run the program again? y/n" << endl;
        cin >> loopAgain;
     
    } while ((loopAgain == 'y') || (loopAgain == 'Y'));

    return 0;
}


/*

Write a C++ program to use a sentinel value for looping.  Your program must ..

    Use a while loop to read in a list of integers until a sentinel value is read (ex: 9999)
    Calculate and print a minimum
    Calculate and print a maximum
    Calculate and print an average
    Use a do-while to loop until the user wants to quit

*/
