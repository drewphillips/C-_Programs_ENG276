#include <iostream>
#include <iomanip>
#include <cmath>
#include <cctype>
#include <string>
using namespace std;

int main()
{
    
    int n = 0;
    int a1 = 0;
    int d = 0;
    int r = 0;
    int next = 0;
    int i = 0 ;
    int sum = 0;
    char loopAgain;

    cout << "Drew Phillips" << endl << endl;


    do {

        cout << "How many numbers woudl you like to calulate arithmetically?" << endl;
        cin >> n;
        cout << "Enter in the first number in the squiens: " << endl;
            cin >> a1;
        cout << "Enter in the common difference: " << endl;
            cin >> d;
        
        cout << a1 << ", ";
        next = a1;
        
        for (i=1; i < n; i++) {
            next = next + d;
            cout << next << ", ";
            
            sum = sum + next;        
        }
        cout << endl << sum + a1 << " Was the sum of all numbers." << endl << endl;

        //reset
        n=0;
        i=0;
        a1=0;
        next=0;
        sum = 0;
        cout << "How many numbers woudl you like to calulate Geometrically?" << endl;
        cin >> n;
        cout << "Enter in the first number in the squiens: " << endl;
            cin >> a1;
        cout << "Enter in the common ratio: " << endl;
            cin >> r;
        
        cout << a1 << ", ";
        next = a1;
        
        for (i=1; i < n; i++) {
            next = next * r;
            cout << next << ", ";
            
            sum = sum + next;        
        }
        cout << endl << sum + a1 << " Was the sum of all numbers." << endl << endl;

        cout << "do you want to run the program again? y/n" << endl;
        cin >> loopAgain;
        loopAgain = tolower(loopAgain);
    } while (loopAgain == 'y');
    
    


    return 0;
}


/*


Write a C++ program to ...

    Read in the number of desired terms, n
    Read in the first term, a1
    Use the formulas for all calculatons
    Use a for loop.  If arithmetic, read in common difference.  Calculate and print the sequence of n terms, with a comma separating terms.  Calculate the sum of the n terms.
    Use a while loop.  If geometric, read in common ratio.  Calculate and print the sequence of n terms, with a comma separating terms.  Calculate the sum of the n terms.
    Loop until the user wants to quit.  Use a do-while loop.

*/