#include <iostream>
#include <iomanip>      //For setprecision
using namespace std;

int main() {

   double mPG;
   double gasPrice;
   double twenty, seventyFive, fiveHundred;
   
   cin >> mPG;
   cin >> gasPrice;
   
   cout << fixed << setprecision(2);   // All later cout's will print floating-point values to exactly 2 decimal places.
                                       // Ex: 3.60
   twenty = 20 / mPG * gasPrice;
   seventyFive = 75 / mPG * gasPrice;
   fiveHundred = 500 / mPG * gasPrice;
   
   cout << twenty << " " << seventyFive << " " << fiveHundred << endl;
   
   return 0;
}
