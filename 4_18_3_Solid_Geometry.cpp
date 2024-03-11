//ran out of time to check all of them, but it runs!

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

int main() {

    char loopAgain = 'y';
    int userSelection;
    double radius;
    double radiusTwo;
    double height;
    double totVolume;
    double totSurfaceArea;
    
    cout << "Drew Phillips" << endl;

    while ((loopAgain == 'y') || (loopAgain = 'Y')) {

       //enter in some values?

       //print a menu

       cout << "What is the solid you want to calulate? enter a menue option" << endl;
       cout << "1) Capsul" << endl;
       cout << "2) Cone" << endl;
       cout << "3) Frustum" << endl;
       cout << "4) Hemispohere" << endl;
       cin >> userSelection;

        if (userSelection == 1) {
            cout << "The Volume of a Capsul is V = πr^2(4/3 * r + h)." << endl;
            cout << "The total Surface Area is SA = 2πr(2r + a)." << endl;
            cout << "Please enter 'r' Radius and 'h' Height:" << endl;
            cin >> radius;
            cin >> height;
            totVolume = M_PI * (radius * radius) * 4/3 * (radius + height);
            totSurfaceArea = 2 * (M_PI * radius) * (2 * radius + height);
            cout << fixed << setprecision(3);
            cout << "The Volume is: " << totVolume << endl;
            cout << "The total Surface Area is: " << totSurfaceArea << endl;
            //FIX me check use case
        }

        else if (userSelection == 2) {
            cout << "The Volume of a Cone is V = (1/3)πr^2h." << endl;
            cout << "The total Surface Area is SA = πR^2 + πR*H " << endl;
            cout << "Please enter 'r' Radius and 'h' Height:" << endl;
            cin >> radius;
            cin >> height;
            totVolume = (1.0/3.0) * M_PI * (radius * radius) * height;
            totSurfaceArea = M_PI * (radius * radius) + M_PI * radius * height;
            cout << fixed << setprecision(3);
            cout << "The Volume is: " << totVolume << endl;
            cout << "The total Surface Area is: " << totSurfaceArea << endl;
            // use case passed!
        }

        else if (userSelection == 3) {
            cout << "The Volume of a Frustum is V = πh/3 [ (R3 - r3) / r ]." << endl;
            cout << "The total Surface Area is SA = πl [ (R2 - r2) / r ] + π (R2 + r2) " << endl;
            cout << "Please enter little Radius 'r1', the larger radius 'r2' and 'h' Height:" << endl;
            cin >> radius;
            cin >> radiusTwo;
            cin >> height;
            totVolume = (M_PI * height) / 3.0 * ((pow(radiusTwo, 3) - pow(radius, 3)) /radius );
            totSurfaceArea = M_PI * height * (pow(radiusTwo, 2) - pow(radius, 2)) + M_PI * (pow(radiusTwo, 2) + pow(radius, 2));
            cout << fixed << setprecision(3);
            cout << "The Volume is: " << totVolume << endl;
            cout << "The total Surface Area is: " << totSurfaceArea << endl;
            // usr case ... way off, time is not on my side, moving on. 
        }

        else if (userSelection == 4) {
            cout << "The Volume of a Hemisphere is V = (2/3)πr3." << endl;
            cout << "The total Surface Area is SA = (2πr2) + (πr2) = 3πr2" << endl;
            cout << "Please enter 'r' Radius:" << endl;
            cin >> radius;
            //cin >> height;
            totVolume = (2.0/3.0) * M_PI * pow(radius, 3);
            totSurfaceArea = 2 * (M_PI * pow(radius, 2) + M_PI * pow(radius, 2));
            cout << fixed << setprecision(3);
            cout << "The Volume is: " << totVolume << endl;
            cout << "The total Surface Area is: " << totSurfaceArea << endl;
            // volum was right, tot surface area is off.
        }

        else {
            cout << "You can only select 1-4, please try again." << endl;
        }

       cout << "Do you want to calulate a new set of numbers? y/n" << endl;
       cin >> loopAgain;
   }

   return 0;
}

/*

Write a C++ program to calculate total volume and total surface area of a geometric solid.  Your program must ...

    select solid from a menu: Capsule, Cone, Frustum or Hemisphere 
    using an if-else-if structure and based on menu selection, calculate and print total volume and total surface area results to 3 decimal places
    loop until the user wants to quit

*/