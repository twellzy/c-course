#include <iostream>
#include <string>
using namespace std;

double length, width, square_feet;

int main(){
    cout << "Length: ";
    cin >> length;
    cout << '\n';

    cout << "Width: ";
    cin >> width;
    cout << '\n';

    square_feet = length * width;

    cout << "Area of the room: " << square_feet << " Square feet\n";

    return 0;
}