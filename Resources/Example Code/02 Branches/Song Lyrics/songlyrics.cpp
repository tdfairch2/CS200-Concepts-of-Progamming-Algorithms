#include <iostream>
#include <string>
using namespace std;

void Version1();
void Version2();

int main()
{
    Version1();
    Version2();
    
    return 0;
}

void Version1()
{
    cout << "We can dance if we want to" << endl;
    cout << "We can leave your friends behind" << endl;
    cout << "'Cause your friends don't dance and if they don't dance" << endl;
    cout << "Well, they're no friends of mine" << endl;
    cout << "Say, we can go where we want to" << endl;
    cout << "A place where they will never find" << endl;
    cout << "And we can act like we come from out of this world" << endl;
    cout << "Leave the real one far behind" << endl;
    cout << endl << endl;
}

void Version2()
{
    cout << "Enter a verb: ";
    string verb;
    cin >> verb;
    
    string relation;
    cout << "Enter an inter-personal relationship: ";
    cin >> relation;
    
    cout << "Enter another verb: ";
    string verb2;
    cin >> verb2;
    
    cout << "Enter a place where one comes from: ";
    string place;
    cin >> place;
    
    cout << "Enter another place: ";
    string place2;
    cin >> place2;
    
    cout << endl << endl;
    cout << "We can " << verb << " if we want to" << endl;
    cout << "We can leave your " << relation << "s behind" << endl;
    cout << "'Cause your " << relation << "s don't " << verb << " and if they don't " << verb << endl;
    cout << "Well, they're no " << relation << "s of mine" << endl;
    
    cout << "Say, we can go where we want to" << endl;
    cout << "A place where they will never " << verb2 << endl;
    cout << "And we can act like we come from" << place << endl;
    cout << "Leave " << place2 << " far behind" << endl;
}
