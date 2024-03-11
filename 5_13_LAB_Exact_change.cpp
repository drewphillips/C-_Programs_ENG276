#include <iostream>
using namespace std;

int main() {

  int leftOver;
  int pennyCount;
  int nickelCount;
  int dimeCount;
  int quarterCount;
  int dollarCount;
  int totalCents;
    
  cout << "How much money are you paying with?" << endl;
  cin >> totalCents;
  
   dollarCount = totalCents / 100;
   leftOver = (totalCents - dollarCount * 100);
  
   quarterCount = leftOver / 25;
   leftOver = (leftOver - quarterCount * 25);
   
   dimeCount = leftOver / 10;
   leftOver = (leftOver - dimeCount * 10);
   
   nickelCount = leftOver / 5;
   leftOver = (leftOver - nickelCount * 5);
   
   pennyCount = leftOver / 1;
   
   

   
   
   //cout << quarterCount << " Quarter" << endl;
   //cout << dimeCount << " Dime" << endl;
   
   //plural and print logic
   
   if (totalCents == 0) {
      cout << "No change" << endl;
   }
   if (dollarCount == 1) {
      cout << dollarCount << " Dollar" << endl;
   }
   if (dollarCount > 1) {
      cout << dollarCount << " Dollars" << endl;
   }
   if (quarterCount == 1) {
      cout << quarterCount << " Quarter" << endl;
   }
   if (quarterCount > 1) {
      cout << quarterCount << " Quarters" << endl;
   } 
   if (dimeCount == 1) {
      cout << dimeCount << " Dime" << endl;
   }
   if (dimeCount > 1) {
      cout << dimeCount << " Dimes" << endl;
   } 
   if (nickelCount == 1) {
      cout << nickelCount << " Nickel" << endl;
   }
   if (nickelCount > 1) {
      cout << nickelCount << " Nickels" << endl;
   } 
   if (pennyCount == 1) {
      cout << pennyCount << " Penny" << endl;
   }
   if (pennyCount > 1) {
      cout << pennyCount << " Pennys" << endl;
   } 
   
   
   return 0;
}


/*

Write a program with total change amount as an integer input, and output the change using the fewest coins, one coin type per line. The coin types are Dollars, Quarters, Dimes, Nickels, and Pennies. Use singular and plural coin names as appropriate, like 1 Penny vs. 2 Pennies.

*/