#include <iostream>
#include <string>
using namespace std;

int main() 
{
    
    string firstName;
    string middleInitial;
    string lastName;

    cout << "Drew Phillips" << endl;
    
    cout << "Enter in your First Name, Middel Initial and Last Name" << endl;
    cin >> firstName;
    cin >> middleInitial;
    cin >> lastName;
    
    cout << "Welcome to C++ " << firstName << " " << middleInitial << " " << lastName << endl;


    return 0;
}

/*

    read in a firstName, middleInitial, and lastName
    print "Welcome to C++  Yvonne M Sandoval! "
    print "Sandoval"
    do not loop

*/