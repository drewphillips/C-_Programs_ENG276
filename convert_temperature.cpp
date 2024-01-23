#include <iostream>

//Drew Phillips ENG276 1-23-2024

using namespace std;

int main() 
{

double fahrenheit;
double celsius;

//F to be convertted to C

    cout << "Enter the degree in Fahrenhei to be converted to Celsius: ";
    cin >> fahrenheit;
    celsius = (fahrenheit - 32.0) * (5.0/9.0);
    cout << celsius << " Degrees Celsius" << endl;

// C to be converted to F

    cout << "Enter the degree in Celsius to be converted to Fahreheit: ";
    cin >> celsius;
    fahrenheit = (celsius * (9.0/5.0)) + 32;
    cout << fahrenheit << " Degrees Fahrenhei" << endl;

    return 0;
}
