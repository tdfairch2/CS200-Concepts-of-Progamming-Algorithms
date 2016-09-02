#include <iostream>
#include <string>
using namespace std;

void Problem1()
{
    float price;
    float tax;
    float pricePlusTax;
    string state;
    
    cout << "What is the price? ";
    cin >> price;
    
    cout << "What is the state? ";
    cin >> state;
    
    if ( state == "KS" )
    {
        tax = 0.065;
    }
    else if ( state == "MO" )
    {
        tax = 0.04225;
    }
    
    pricePlusTax = price + price * tax;
    
    cout << "Price plus tax: " << pricePlusTax << endl;
}

int main()
{
    Problem1();
    
    return 0;
}
