#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

int main()
{
    bool hasFever;
    bool hasShortBreath;
    bool hasItchyEyes;
    char loopAgain = 'y';

    cout << "Drew Phillips" << endl;

    while (loopAgain == 'y') {

    cout << "Do you have a Fever? yes or no" << endl;
    cin >> hasFever;

    if (hasFever) {
        cout << "Do you have shortness of breath? 1 for yes or 2 for no" << endl;
        cin >> hasShortBreath;
        if (hasShortBreath) {
            cout << "You may have Covid-19" << endl;
            cout << "Only a doctor can give you a diagnosis.  But, you MAY have the flu and other symptoms including Cough, Fatigue, Weakness, and Exhaustion." << endl;
        }
        else {
            cout << "You may have the flu" << endl;
        }
    }

    else {
    cout << "Do you have Itchy Eyes? 1 for yes yes or 0 for no" << endl;
    cin >> hasItchyEyes;
        
        if (hasItchyEyes) {
            cout << "You may have allergies" << endl;
        }
        else {
            cout << "You may have a cold" << endl;
        }
    }
    
    cout << "Do you want to loop again? y/n" << endl;
    cin >> loopAgain;
    }
    

    
    

return 0;
}



/*

Write a C++ program to work with Boolean variables and determine whether you MAY have the COVID-19, the flu, allergies or a cold.

    Update the partial code provided.
    Do you have a Fever? If Yes, set the Boolean variable hasFever to "true" otherwise "false"; Continue with the other Boolean variables.
    Print the diagnosis and other symptoms using the provided test case above.
    loop until the user wants to quit

*/
