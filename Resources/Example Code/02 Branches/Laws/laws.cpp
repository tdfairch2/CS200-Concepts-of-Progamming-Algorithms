#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "What is your age? ";
    cin >> age;
    
    if ( age < 18 )
    {
        cout << "* You cannot vote" << endl;
        cout << "* You cannot drink" << endl;
    }
    else if ( age >= 18 && age < 21 )
    {
        cout << "* You can vote" << endl;
        cout << "* You cannot drink" << endl;
    }
    else
    {
        cout << "* You can vote" << endl;
        cout << "* You can drink" << endl;
    }
    
    return 0;
}
