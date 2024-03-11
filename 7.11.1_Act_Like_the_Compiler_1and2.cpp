/*

Think like a compiler and analyze what the given code is accomplishing.

I could not get this to loop.  Can you?

*/



#include <iostream>
#include <iomanip>
#include <cmath>
#include <cctype>
#include <string>
using namespace std;

int main()
{
    //char loopAgain;
    unsigned int i;
    string userInput;
    string userInputNoSpaces;
    string loopAgain;

    cout << "Drew Phillips" << endl << endl;

    do {
        
        cout << "Enter a sentence: ";
        getline(cin, userInput);

        for (i = 0; i < userInput.size(); i++){
            if ( isalpha(userInput.at(i)) ) {
                userInputNoSpaces += userInput.at(i);
            }
        }
        cout << userInputNoSpaces << endl;

        cout << endl << "Another sentence? y/n: ";
        cin >> loopAgain;
        //loopAgain = tolower(loopAgain);

     } while (loopAgain.at(0) == 'y');

    return 0;
}


#include <iostream>
#include <iomanip>
#include <cmath>
#include <cctype>
#include <string>
using namespace std;

int main()
{
    string userText;
    unsigned int i;
    int charCount;

    cout << "Drew Phillip" << endl << endl;
    cout << "Enter in the code to be checked and counted, an output of the numbers of characters will be displayed." << endl;

    getline(cin, userText);

    charCount = 0;
    for (i = 0; i < userText.size(); i++) {
        if ( (userText.at(i) != ' ') && (userText.at(i) != '.') && (userText.at(i) != '?') && (userText.at(i) != '!') ) {
            charCount++;
        }
    }

    cout << "The number of character is: ";
    cout << charCount << endl;
    cout << "The number of black spaces, periods, question marks or exclimation marks is: ";
    cout << userText.size() - charCount << endl;

    return 0;
}

/*



Think like a compiler and analyze what the given code is accomplishing.

Add statements to clarify this code for your user.

*/