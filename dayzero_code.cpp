#include <iostream>

using namespace std;

int main()
{
    int length;
    int width;
    
    cout << "Drew Phillips" << endl;
    cout << "1/18/24" << endl;
    cout << "ENG 276" << endl;
    cout <<"Analyze area and perimeter of a basketball court." << endl;
    
    cout <<"Enter the length of the court" << endl;
    cin >> length;
    cout <<"Enter the width of the court" << endl;
    cin >> width; 
    
    //cout << length << endl;
    //cout << width << endl;
    
    cout << "The area is: " << length * width << endl;
    cout << "The peremeter is: " << 2 * (length + width);
    
    return 0;
}

//github sync 