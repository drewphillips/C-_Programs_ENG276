#include <iostream>

using namespace std;

int main() {

double p;
double v;
double t;
double a = 3.59;
double b = 0.0427;
double n = 1;
double firstTerm;
double secondTerm;
double answer;

cin >> p;
cin >> v;
cin >> t;

firstTerm = p + a * (n * n / v * v);
secondTerm = v - (n * b);

answer = firstTerm * secondTerm;

cout << answer << endl;

   return 0;
}
