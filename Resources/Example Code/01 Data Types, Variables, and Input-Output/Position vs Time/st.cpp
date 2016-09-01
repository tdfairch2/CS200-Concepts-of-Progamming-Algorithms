#include <iostream>
using namespace std;

/*
 * Newtonian Physics:
 * a(t) = -9.8 (meters per second-squared)
 * v(t) = -9.8 t + v[0]
 * s(t) = (-9.8/2)t^2 + v[0]t + s[0]
 * */

float GetVelocity( float time, float initialVelocity, float acceleration );
float GetPosition( float time, float initialPosition, float initialVelocity, float acceleration );

int main()
{
    cout << "Enter an acceleration (-9.8): ";
    float acceleration;
    cin >> acceleration;
    
    cout << "Enter an initial position (above 0): ";
    float initialPosition;
    cin >> initialPosition;
    
    float initialVelocity = 0;
    float time = 0;
    float position = initialPosition;
    float velocity;
    
    cout << endl << "Dropping an object from " << initialPosition << " meters above the ground:" << endl;
    while ( position > 0 )
    {
        velocity = GetVelocity( time, initialVelocity, acceleration );
        position = GetPosition( time, initialPosition, initialVelocity, acceleration );
        
        cout << "TIME: " << time << "\n\t"
            << "Acceleration:   " << acceleration << "\n\t"
            << "Velocity:       " << velocity << "\n\t"
            << "Position:       " << position << endl << endl;
            
        time++;
    }
}

float GetVelocity( float time, float initialVelocity, float acceleration )
{
    return initialVelocity + acceleration * time;
}

float GetPosition( float time, float initialPosition, float initialVelocity, float acceleration )
{
    return ( acceleration / 2 ) * time * time + ( initialVelocity * time ) + initialPosition;
}
