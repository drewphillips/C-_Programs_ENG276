#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

int main() {

    double outerR;
    double innerR;
    double height;
    double radius;
    double perimeter;
    double volume;
    double lateralSurfaceArea;
    double totSurfaceArea;
    double SurfaceArea;
    double lateralSurfaceOuter;
    double lateralSurfaceInner;

    char loopAgain = 'y';
    int userChoice;

    cout << "Drew Phillips" << endl;

    while ((loopAgain == 'y') || (loopAgain == 'Y')) {

        cout << " Enter the calulation you woudl like to preform:" << endl;\
        cout << "1) Volume" << endl;
        cout << "2) Lateral Surface Area" << endl;
        cout << "3) Total Surface Area" << endl;
        cin >> userChoice;

        cout << fixed << setprecision(3);

        if (userChoice == 1) {
            cout << "Enter in  the outer Radius, inner radius and height of your cylinder:" << endl;
            cin >> outerR;
            cin >> innerR;
            cin >> height;
            volume = (M_PI * height * (pow(outerR, 2) - pow(innerR, 2)) /4);
            cout << "The volume is : " << volume << endl;
            // use case passed https://www.omnicalculator.com/math/hollow-cylinder-volume
        }

        else if (userChoice == 2) {
            cout << "Enter in  the Radius and Height of your cylinder:" << endl;
            cin >> radius;
            cin >> height;
            perimeter = 2 * (M_PI * radius);
            lateralSurfaceArea = perimeter * height;
            cout << "The Lateral Surface Area is: " << lateralSurfaceArea << endl;
            //usecase passed https://www.omnicalculator.com/math/lateral-surface-area-cylinder
        }

        else if (userChoice == 3) {
            cout << "Enter in  the outer Radius, inner radius and height of your cylinder:" << endl;
            cin >> outerR;
            cin >> innerR;
            cin >> height;
            SurfaceArea = 2 * M_PI * (pow(outerR,2) - pow(innerR, 2));
            lateralSurfaceOuter = 2 * M_PI * outerR * height;
            lateralSurfaceInner = 2 * M_PI * innerR * height;
            totSurfaceArea = SurfaceArea + lateralSurfaceInner + lateralSurfaceOuter;
            cout << "The total surfice area of the cylindar is: " << totSurfaceArea << endl;
        }

        // I was lead astray! cant find a clulator to check this that takes two radius inputs... and its past 5, 

        /*
        To calculate the surface area of a hollow cylinder with an inner radius, ri, outer radius, ro, and a height, h, follow these steps:

Calculate the surface area of the rings at the top and bottom using the formula Ar = 2π(ro² - ri²).

Determine the lateral surface area of the outer cylindrical surface using the formula Ao = 2πroh.

Find the lateral surface area of the inner cylindrical surface using the formula Ai = 2πrih.

Add all these areas to find the total surface area of the hollow cylinder to get A = 2π((ro² - ri²) + roh + rih).

*/

        else {
            cout << "You can only select 1, 2, or 3, please try again" << endl;
        }

        cout << "Do you want to calulate a new cylinder? y/n" << endl;
        cin >> loopAgain;
    }
    

   return 0;
}

/*

Write a C++ program to 

    Read in the outer Radius, inner radius and height
    select from a menu: volume, lateral surface area, total surface area
    using an if-else-if structure and based on menu selection, calculate and print results to 3 decimal places
    loop until the user wants to quit

*/