#include <iostream>
using namespace std;

int main()
{
    int totalPoints = 0;
    int totalAssignments = 0;
    
    bool done = false;
    
    while ( !done )
    {
        cout << "Enter your score on assignment " << totalAssignments << " %";
        int points;
        cin >> points;
        
        totalPoints += points;
        totalAssignments++;
        
        cout << "Add another? (Y/N): ";
        char choice;
        cin >> choice;
        
        if ( tolower( choice ) == 'n' )
        {
            done = true;
        }
    }
    
    // Calculate average
    float average = totalPoints / totalAssignments;
    
    cout << endl << "Average: " << average << "%" << endl;
    
    if ( average >= 90 )
    {
        cout << "Grade: A" << endl;
    }
    else if ( average >= 80 )
    {
        cout << "Grade: B" << endl;
    }
    else if ( average >= 70 )
    {
        cout << "Grade: C" << endl;
    }
    else if ( average >= 60 )
    {
        cout << "Grade: D" << endl;
    }
    else
    {
        cout << "Grade: F" << endl;
    }
    
    return 0;
}
