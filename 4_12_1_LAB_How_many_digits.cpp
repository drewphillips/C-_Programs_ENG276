#include <iostream>
using namespace std;

int main() {

   int number;
   
   cin >> number;
   
   if ((number >= 0) && (number < 10)) {
      cout << "1 digit" << endl;
   }
   if ((number >= 10) && (number < 100)) {
      cout << "2 digits" << endl;
   }
   if ((number >= 100) && (number < 1000)) {
      cout << "3 digits" << endl;
   }
   if ((number >= 1000) && (number < 10000)) {
      cout << "4 digits" << endl;
   }
   
   return 0;
}