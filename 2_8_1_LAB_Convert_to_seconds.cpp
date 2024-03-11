#include <iostream>
using namespace std;

int main() {
   int seconds;
   int minutes;
   int hours;
   
   cin >> seconds;
   cin >> minutes;
   cin >> hours;
   
   minutes = (60 * hours) + minutes;
   
   seconds = (60 * minutes) + seconds;
   
   cout << seconds << " seconds" << endl;
   
   return 0;
}
