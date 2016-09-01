#include <iostream>
using namespace std;

int main()
{
    int width, height;
    
    cout << "ROOM WIDTH (pixels): ";
    cin >> width;
    
    cout << "ROOM HEIGHT (pixels): ";
    cin >> height;
    
    int area = width * height;
    int perimeter = 2 * width + 2 * height;
    
    // Draw room
    for ( int h = 0; h < height; h++ )
    {
        for ( int w = 0; w < width; w++ )
        {
            cout << "*";
        }
        cout << endl;
    }
    
    cout << "Area: " << area << endl << "Perimeter: " << perimeter << endl;
}
