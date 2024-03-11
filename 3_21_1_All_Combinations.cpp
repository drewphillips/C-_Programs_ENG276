#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string a;
    string b;
    string c;
    
    cout << "Drew Phillips" << endl;
    cout << "Enter in a value for A, B, and C" << endl;

    cin >> a;
    cin >> b;
    cin >> c;

    cout << "You entered: " << a << " " << b << " " << c << endl;

    cout  << a << b << c << " " << a << c << b << " "<< b << a << c << " " << b << a << c << " " << c << a << b << " " << c << b << a << endl;


    
    return 0;
}


/*

Write a program to ...

    Read in a character into each a, b and c
    Output all combinations of character variables a, b, and c, in the order shown below.
    After the final output, end with a newline.
    If a = 'x', b = 'y', and c = 'z', then the output is:

xyz xzy yxz yzx zxy zyx

*/