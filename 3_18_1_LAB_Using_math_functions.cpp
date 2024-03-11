#include <iostream>
#include <cmath>
using namespace std;

int main() {
   double x = 0;
   double y = 0;
   double z = 0;
   
   double xPowZ;
   double xPowYPowZ;
   double fabsY;
   double sqRootXYPowZ;
   double tempCalc = 0;
   
   cin >> x;
   cin >> y;
   cin >> z;
   
   //output x to the power of z, 
   xPowZ = pow(x, z);
   //x to the power of (y to the power of z)
   tempCalc = pow(y, z);
   xPowYPowZ = pow(x, tempCalc);
   //the absolute value of y,
   fabsY = fabs(y);
   //and the square root of (xy to the power of z). 
   sqRootXYPowZ = sqrt(pow(x * y, z));
   
   cout << xPowZ << " "<< xPowYPowZ << " " << fabsY << " " <<sqRootXYPowZ << endl;
   
   //and the square root of (xy to the power of z). 

   return 0;
}
