#include <iostream>
using namespace std;

int main() {

   int low;
   int high;
   //int sum;
   int included;
   int i;
   int differince = 1;
   
   cout << "Enter in a low value, a high value, and indicated weather the out put should be inclusinve or exclusive with a 1 or 0" << endl;
   cin >> low;
   cin >> high;
   cin >> included;
   
   
   // it was done and I got a 10/10 and then I had to start messing with it. 
   
   for (i=0; i <= differince; ++i) {
      
      /* im coding cornot cases
      if ((low > high) && (low == high -1)) {
         differince = 0;
         cout << "No output.";
      }
      else if ((low == high -1) && (included == 1)) {
         differince = 0;
         cout << "No output.";
      }
      */
      
      if (included == 1) {
      differince = high - low;
      cout << low + i << " ";
      }
   
      else if (included == 0) {
      differince = high - low - 2;
      cout << low + 1 + i << " ";
   }
   else {
      cout << "No input."; 
}
}

cout << endl;
   return 0;
}


/*

Write a program that outputs all integers within a range. The program takes three integer inputs. The first two integers are the low and high integers of the range. The third integer indicates whether the range is inclusive or exclusive: 0 excludes the low and high integers, and 1 includes the low and high integers. Assume the first two integers are never the same. You are required to use a For loop. 

*/