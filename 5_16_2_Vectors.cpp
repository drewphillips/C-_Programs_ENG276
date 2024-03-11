#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

int main()
{

    double a, b;
    double c, d;
    char loopAgain = 'y';
    char menuLoop = 'y';
    int userSelection;
    double answerOne;
    double answerTwo;
    double answerThree;
    double answerFore;
    double scalar;
    double angel;
    double finalAnswer;

    cout << "Drew Phillips" << endl;

    while ((loopAgain == 'y') || (loopAgain == 'Y')) {

        cout << "Read in two orderd pairs, firs pair:" << endl;
        cin >> a >> b;
        cout << "Read in the seconed pair:" << endl;
        cin >> c >> d;
        menuLoop = 'y';

        while ((menuLoop == 'y') || (menuLoop == 'Y')) {

            cout << "MENU" << endl;
            cout << "1) Adding / Subtracing" << endl;
            cout << "2) Scalar Multiplication" << endl;
            cout << "3) Magnitude" << endl;
            cout << "4) Dot Product" << endl;
            cout << "5) Angle between two vectors" << endl;
            cout << "Choice:" << endl;
            cin >> userSelection;

            cout << fixed << setprecision(2);

            switch (userSelection) {
                case 1:
                answerOne = a + b;
                answerTwo = c + d;
                answerThree = a - b;
                answerFore = c - d;
                cout << "Addtion = " << endl;
                cout << answerOne << ", " << answerTwo << endl;
                cout << "Subtraction = " << endl;
                cout << answerThree << ", " << answerFore << endl;
                break;

                case 2:
                cout << "Scalar Mulitpluer, what is the number to scale by? " << endl;
                cin >> scalar;
                answerOne = scalar * a;
                answerTwo = scalar * b;
                answerThree = scalar * c;
                answerFore = scalar * d;

                cout << "pair one scaled = " << endl;
                cout << answerOne << ", " << answerTwo << endl;
                cout << "Pair two scaled = " << endl;
                cout << answerThree << ", " << answerFore << endl;

                break;

                case 3:
                answerOne = sqrt(pow(a, 2) + pow(b, 2));
                answerTwo = sqrt(pow(c, 2) + pow(d, 2));
                cout << "Magnitued of both pairs = " << endl;
                cout << answerOne << " - " << answerTwo;
                break;

                case 4:
                answerOne = a * c + b * d;
                cout << "The Dot product is: " << answerOne << "." << endl;

                break;

                case 5:
                //test cae (3,5) (2,8)
                //nemerator 46
                answerOne =a * c + b * d;
                //denominator  sqrt(34) * sqrt (68)  48.08326
                answerTwo = fabs(sqrt(pow(a, 2) + pow(b, 2)));
                answerThree = fabs(sqrt(pow(c, 2) + pow(d, 2)));
                //divesion
                answerFore = answerOne / (answerTwo * answerThree);
                //cout << answerOne << answerTwo << answerThree << answerFore << endl;


                // inverse cos theta
                angel = acos(answerFore);
                finalAnswer = (angel * (180/M_PI));

                cout << "The answer is .... " << finalAnswer << " degrees ... but I could be wrong " << endl;

                break;

                default:
                cout << "You only have 5 options to chose from, please enter 1-5" << endl;
            }





            cout << endl << "Do you want to run a diferent calculation? y/n" << endl;
            cin >> menuLoop;
        }

        cout << "Do you want to loop the whole program again y/n?" << endl;
        cin >> loopAgain;
    }

    return 0;
}


/*



Write a C++ program to work with 2-dimensional vectors.  Your program must …

    Read in components for two vectors <x1, y1> and <x2, y2>.
        do not use an array structure and do not use a vector structure
    Provide a menu to select from the 5 options listed above
        scalar multiplication: use the same scalar for both vectors
        magnitude: calculate for both vectors
    Use a switch statement to calculate and print user selection to 2 decimal places
    Loop the menu until the user wants to quit
        more than one operation can be done on the same vectors
    Loop until the user wants to quit
        two new vectors are read in and new calculations performed



*/