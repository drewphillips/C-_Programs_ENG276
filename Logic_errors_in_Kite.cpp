/*
Logic errors can be subtle and difficult to detect. Whereas syntax errors will have the compiler generate error messages to give hints as to what and/or where an issue may be, logic errors may not cause the program to generate any errors at all. Programs with logic errors may compile and run, but the resultant output may be unexpected or incorrect.

This program calculates the area of a rectangular kite. However, the mathematical formula for the area is incorrect. Fix this logic error so the area of a rectangular kite is properly calculated.

The correct output of the program is:
*/

#include <iostream>
using namespace std;

int main() {
      int longSide = 12;
      int shortSide = 10;
      int perimeter;
      int area;

      cout << "Dean Phillips ENG276" << endl;

      //perimeter formula; 2 times length plus width
      perimeter = (longSide + shortSide) * 2;

      //area formula; lenagth times width
      area = (longSide * shortSide);

      cout << "Sides: " << longSide << " " << shortSide << endl;
      cout << "Perimeter: " << perimeter << endl;
      cout << "Area: " << area << endl;

    // Your directions are slightly off, but maybe that was the point. Cheers!

      return 0;
}
