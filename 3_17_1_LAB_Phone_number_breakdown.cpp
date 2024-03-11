#include <iostream>
using namespace std;

int main() {
   long long phoneNumber;
   int areaCode;
   int prefix = 000;
   int forDigit;
    
   cin >> phoneNumber;
   
   areaCode = phoneNumber / 10000000;
   prefix = phoneNumber / 10000;
   prefix = prefix % 1000;
   forDigit = phoneNumber % 10000;
   
   cout << "(" << areaCode << ") " << prefix << "-" << forDigit << endl; 

   
   return 0;
}
