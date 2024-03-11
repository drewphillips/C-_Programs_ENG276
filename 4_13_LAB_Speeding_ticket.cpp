#include <iostream>
using namespace std;

int main() {
  
   
   int speedLimit;
   int drivingSpeed;
  
   int ticketAmount;
   cin >> speedLimit;
   cin >> drivingSpeed;
  
   
   if (drivingSpeed <= speedLimit - 10) {
      ticketAmount = 50;
   }
   else if ((drivingSpeed >= speedLimit + 6) && (drivingSpeed <= speedLimit + 20)) {
      ticketAmount = 75;
   }
   else if ((drivingSpeed >= speedLimit + 21) && (drivingSpeed <= speedLimit + 40)) {
      ticketAmount = 150;
   }
   else if (drivingSpeed >= speedLimit + 41) {
      ticketAmount = 300;
   }
   else {
      ticketAmount = 0;
   }
   cout << ticketAmount << endl;
   return 0;
}
