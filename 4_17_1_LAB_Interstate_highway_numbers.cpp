/*
Primary U.S. interstate highways are numbered 1-99. Odd numbers (like the 5 or 95) go north/south, and evens (like the 10 or 90) go east/west. Auxiliary highways are numbered 100-999, and service the primary highway indicated by the rightmost two digits. Thus, I-405 services I-5, and I-290 services I-90. Note: 200 is not a valid auxiliary highway because 00 is not a valid primary highway number.

Given a highway number, indicate whether it is a primary or auxiliary highway. If auxiliary, indicate what primary highway it serves. Also indicate if the (primary) highway runs north/south or east/west. 
*/

#include <iostream>
using namespace std;

int main() {
   int highwayNumber;
   double auxiliary;
   
   cin >> highwayNumber;
   
   if (highwayNumber >=100) {
      auxiliary = highwayNumber -100;
   }
   if (highwayNumber >=201) {
      auxiliary = highwayNumber -200;
   }
   
   if (highwayNumber >=401) {
      auxiliary = highwayNumber -400;
   }
      
   
   cin >> highwayNumber;
   
   if ((highwayNumber == 100) || (highwayNumber == 200) || (highwayNumber == 300) || (highwayNumber == 400) || (highwayNumber == 500) || (highwayNumber == 600) || (highwayNumber == 700) || (highwayNumber == 800) || (highwayNumber == 900)) {
      cout << highwayNumber << " is not a valid interstate highway number." << endl;
   }
   else if ((highwayNumber > 0) && (highwayNumber < 100) && (highwayNumber % 2 == 0 )) { 
      cout << "I-" << highwayNumber << " is primary, going east/west." << endl;
   } 
   else if ((highwayNumber > 0) && (highwayNumber < 100) && (highwayNumber % 1 == 0 )) { 
      cout << "I-" << highwayNumber << " is primary, going north/south." << endl;
   } 
   
   else if ((highwayNumber > 100) && (highwayNumber < 1000) && (highwayNumber % 2 == 0 )) { 
      cout << "I-" << highwayNumber << " is auxiliary, serving I-" << auxiliary << ", going east/west."  << endl;
   } 
   else if ((highwayNumber > 100) && (highwayNumber < 1000) && (highwayNumber % 1 == 0 )) { 
      cout << "I-" << highwayNumber << " is auxiliary, serving I-" << auxiliary << ", going north/south." << endl;
   }
   else {
      cout << highwayNumber << " is not a valid interstate highway number." << endl;
   }

   return 0;
}
