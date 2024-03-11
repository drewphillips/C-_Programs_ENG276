#include <iostream>
#include <iomanip>   //For setprecision
using namespace std;

int main() {
   double caffeineMg;  // "double" supports floating-point like 75.5, versus int for integers like 75.
   double six;
   double twelve;
   double twentyFour;
   
   cin >> caffeineMg;
   cout << fixed << setprecision(2);   // All later cout's will print floating-point values to exactly 2 decimal places.
                                       // Ex: 3.60

   six = caffeineMg / 2;
   twelve = caffeineMg / 2 / 2;
   twentyFour = caffeineMg / 2 / 2 / 2 / 2;
   
   cout << "After 6 hours: " << six << " mg" <<endl;
   cout << "After 12 hours: " << twelve << " mg" <<endl;
   cout << "After 24 hours: " << twentyFour << " mg" <<endl;

   return 0;
}
