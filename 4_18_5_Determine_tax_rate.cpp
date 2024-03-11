#include <iostream>
using namespace std;

int main() {   
   int annualSalary;
   double taxRate;
   int taxToPay;

   cout << "Enter annual salary: " << endl;
   cin >> annualSalary;

   // Determine the tax rate from the annual salary
   // FIXME: Write code to address the challenge question above
   if (annualSalary < 0) {
       cout <<  "You cant make less than Zero, please try again or get a job!" << endl;
       taxRate = 0.0;
   }
   else if (annualSalary <= 20000) {
      taxRate = 0.10;
   }
   else if (annualSalary <= 50000) {
      taxRate = 0.20;
   }
   else if ((annualSalary > 50000) && (annualSalary < 100000)) {
        taxRate = 0.30;
   }
   else {
      taxRate = 0.40;
   }

   taxToPay = static_cast<int>(annualSalary * taxRate);   // Truncate tax to an integer amount
   cout << "Annual Salary: $" << annualSalary << endl;
   cout << "Tax rate: " << taxRate << endl;
   cout << "Tax to pay: $" << taxToPay << endl;

   return 0;
}


/*

Pseudocode

    Run the program with an annual income of 120000. Note the tax rate and tax to pay.  Add "$" where appropriate.
    Modify the program to add a new tier: Annual income above 50000 but less than or equal to 100000 is taxed at the rate of 30%, and annual income above 100000 is taxed at 40%.
    Run the program again with an annual income of 120000. What is the tax rate and tax to pay now?
    Run the program again with an annual income of 60000.
    What happens if a negative annual salary is entered? Modify the program to print an error message in that case.

*/