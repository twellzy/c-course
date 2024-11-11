#include <iostream>
#include <string>
using namespace std;

double apple, orange, bread, milk, eggs, beef, total;

int main(){
    cout << "Tanner\'s Market\n";
    cout << "Please give a price for the following products\n";

    cout << "Apple: ";
    cin >> apple;
    cout << '\n';

    cout << "Orange: ";
    cin >> orange;
    cout << '\n';

    cout << "Bread: ";
    cin >> bread;
    cout << '\n';

    cout << "Milk: ";
    cin >> milk;
    cout << '\n';

    cout << "Eggs: ";
    cin >> eggs;
    cout << '\n';

    cout << "Beef: ";
    cin >> beef;
    cout << '\n';

    total = (apple + orange + bread + milk + eggs + beef) * 1.06;
    cout << "Your total: " << total << endl;
    
    return 0;
}