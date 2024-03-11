#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main() {
	int numPizza;
	double subTotal;
	double totalDue;
	
cin >> numPizza;

cout << fixed << setprecision(2);

subTotal = 14.99 * numPizza;
totalDue = subTotal * 0.08 + subTotal;

cout << "Pizzas: " << numPizza << endl;
cout << "Subtotal: $" << subTotal << endl;
cout << "Total due: $" << totalDue << endl;
	
	return 0;
}