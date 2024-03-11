/*




Think like a compiler and analyze what the given code is accomplishing.

Add statements to clarify this code for your user.


*/


#include <iostream>
#include <iomanip>
#include <cmath>
#include <cctype>
#include <string>
using namespace std;

int main()
{
    char loopAgain;
    string userString;
    unsigned int i;
    bool foundNonDigit;

    cout << "Drew Phillips" << endl << endl;

    do {
        cout << "Enter a stringto know if its all letter or all numbers: ";
        cin >> userString;

        foundNonDigit = false;
        for (i = 0; i < userString.size(); i++) {
            if (!isdigit(userString.at(i))) {
                foundNonDigit = true;
            }
        }

        if (!foundNonDigit) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }

        cout << endl << "Another string to Analize? y/n: ";
        cin >> loopAgain;
        //loopAgain = tolower(loopAgain);

    } while ((loopAgain == 'y') || (loopAgain == 'Y'));

    return 0;
}

#include <iostream>
#include <iomanip>
#include <cmath>
#include <cctype>
#include <string>
using namespace std;

int main() {
   int userNum;
   string loopAgain;

   loopAgain = 'y';

    do {
        cout << "Enterin a number to be devidied by 2." << endl;
        cout << "the program will print the remainder untill the intager value is greater than zero" << endl;
   cin >> userNum;
   
   while (userNum > 0) { 
      cout << userNum % 2;
      userNum = userNum / 2;
   }
   cout << endl;
   
   cout << "do you want to run the program again or quit? y/n" << endl;
   cin >> loopAgain;
    } while ((loopAgain.at(0) == 'y') || (loopAgain.at(0) == 'y'));
   return 0;
}

/*


Think like a compiler and analyze what the given code is accomplishing.

Add statements to clarify this code for your user.  Loop until the user wants to quit.


*/

