//Bitcoin is worth infinity divided by 21 Million, you do the math. ~Tim
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cctype>
#include <string>
using namespace std;

int main()
{
    double bitcoin;

    cout << "Enter in the amount of BTC you think you have..." << endl;
    cin >> bitcoin;
    
    if (bitcoin < 0.99999999) {
	    cout << "Buy more Bitcoin!" << endl;
	}
    
    else if (bitcoin >= 1.0) {
	    cout << "We made it, time to retire in Montana!" << endl;
	}
	
	else {
	    cout << "I lost my Bitcoin in a Tragic boating accident" << endl;
	}
	
    return 0;
}