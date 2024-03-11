#include <iostream>
#include <string>
using namespace std;

int main() {
	int strokes;
	int par;
	//stringName;

   cin >> strokes;
   cin >> par;
   
	if (strokes <= par - 2) {
	   cout << "Par " << par << " in " << strokes << " strokes is Eagle" << endl;
	}
	else 	if (strokes <= par - 1) {
	   cout << "Par " << par << " in " << strokes << " strokes is Birdie" << endl;
	}
	else 	if (strokes == par) {
	   cout << "Par " << par << " in " << strokes << " strokes is Par" << endl;
	}
	else 	if ((strokes == par + 1) && (strokes > 2)) {
	   cout << "Par " << par << " in " << strokes << " strokes is Bogey" << endl;
	}
	else 	if ((strokes > par + 1) || (strokes <= par + 4) || (par <= 2) || ( par >= 6)) {
	   cout << "Par " << par << " in " << strokes << " strokes is Error" << endl;
	}   
	   

	return 0;
}