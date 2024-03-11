#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	int age;
	double weight;
	double heartRate;
	double minutes;
	double iner;
	double outer;
	double calories;

	cin >> age;
	cin >> weight;
	cin >> heartRate;
	cin >> minutes;

	iner = (age * 0.2757) + (weight * 0.03295) + (heartRate * 1.0781) - 75.4991;
	outer = iner * minutes;
	calories = outer / 8.368;

	cout << fixed << setprecision(2);
	cout << "Calories: " << calories << " calories" << endl;



	return 0;
}
