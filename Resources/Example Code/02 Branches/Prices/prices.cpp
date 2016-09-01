#include <iostream>
#include <string>
using namespace std;

/*
 * You might discuss how this can be cleaned up,
 * e.g., using arrays, classes, etc. if students
 * have previously had a programming course.
 * */

void DisplayMenu()
{
    cout << endl << "PRODUCTS" << endl;
    cout << "1. E-Reader        $49.99" << endl;
    cout << "2. Digital Camera  $109.99" << endl;
    cout << "3. Laptop          $359.99" << endl;
    cout << "4. Gaming Keyboard $69.99" << endl;
    cout << "--------------------------" << endl;
}

int main()
{
    string userInput;
    
    bool done = false;
    float totalPrice = 0;
    
    while ( !done )
    {
        DisplayMenu();
        
        cout << "Enter product number or DONE to finish: ";
        cin >> userInput;
        
        if ( userInput == "DONE" )
        {
            done = true;
        }
        
        else if ( userInput == "1" )
        {
            totalPrice += 49.99;
        }
        else if ( userInput == "2" )
        {
            totalPrice += 109.99;
        }
        else if ( userInput == "3" )
        {
            totalPrice += 359.99;
        }
        else if ( userInput == "4" )
        {
            totalPrice += 69.99;
        }
    }
    
    cout << endl << "Your total comes to: $" << totalPrice << endl;
    
    return 0;
}
