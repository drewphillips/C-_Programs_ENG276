#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {

   double sideA;
   double sideB;
   double sideC;
   double half;
   double area;
   
   cin >> sideA;
   cin >> sideB;
   cin >> sideC;
   
   half = 0.5 * (sideA + sideB + sideC);
   area = sqrt( half * (half - sideA) * (half - sideB) * (half - sideC));
   cout << fixed << setprecision(2);
   cout << "Triangle area = " << area << endl;
   
   
   return 0;
}
