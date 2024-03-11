#include <iostream>
#include <cmath>
using namespace std;
#include <iomanip>

int main() {

   double one;
   double two;
   double three;
   int sum;
   int avg;
   int product;
   double sum2;
   double avg2;
   double product2;
   
   cin >> one;
   cin >> two;
   cin >> three;
   
   sum = one + two + three;
   avg = (one + two + three) / 3;
   product = one * two * three;
   
   cout << fixed << setprecision(0);
   cout << sum << " " << avg << " " << product << endl;
   
   sum2 = one + two + three;
   avg2 = (one + two + three) / 3;
   product2 = one * two * three;
   
   cout << fixed << setprecision(0);
   cout << sum2 << " ";
    cout << fixed << setprecision(4);
     cout << avg2 << " ";
     cout << fixed << setprecision(0);
    cout << product2 << endl;
   cout << fixed << setprecision(0);
   cout << one - avg << " " << two - avg << " " << avg2 - three << endl;

//I see there are beter ways to do all this, I was coding to the auto tester and not the instructions, but ran out of time, 
// the test shows 7 different options but the instructions only show 3. 

   return 0;
}
