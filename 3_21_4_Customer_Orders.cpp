#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string sandwich;
    string side;
    string drink;

    int numSandwitch = 0;
    int numSide = 0;
    int numDrink = 0;

    double sandwitchCost = 14.95;
    double sideCost = 1.95;
    double drinkCost = 3.95;
    double totalCost = 0.0;

    cout << "Drew Phillips" << endl;
    
    cout << "Enter in a sandwitch name, or if you dont want one... type 'no sandwich wanted'," ;
    getline(cin, sandwich);

    if (sandwich != "no sandwich wanted") {
        numSandwitch = numSandwitch + 1;        
    }

    cout << "Enter in a Side name, or if you dont want one... type 'no side wanted'," ;
    getline(cin, side);

    if (side != "no side wanted") {
        numSide = numSide + 1;        
    }

    cout << "Enter in a drink name, or if you dont want one... type 'no drink wanted'," ;
    getline(cin, drink);

    if (drink != "no drink wanted") {
        numDrink = numDrink + 1;        
    }

    //cout << numSandwitch << numSide << numDrink << endl;

    cout << " You orderd a " << sandwich << " Sandwitch, It costs $" << sandwitchCost << endl;
    cout << " You orderd a " << side << " Side, It costs $" << sideCost << endl;
    cout << " You orderd a " << drink << " Drink, It costs $" << drinkCost << endl;

    totalCost = sandwitchCost * numSandwitch + sideCost * numSide + drinkCost * numDrink;

    cout << "Your total cost is $" << totalCost << endl;

    return 0;
}


/*



Write a C++ program that  ...

    reads in a sandwich name or no sandwich wanted
    reads in a side or no side wanted
    reads in a drink or no drink wanted
    prints the customer's order and the total without taxes

All sandwiches are $14.95, all sides are $1.95 and all drinks are $3.95.


*/
