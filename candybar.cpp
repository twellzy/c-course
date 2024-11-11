#include <iostream>
#include <string>

using namespace std;

double amount_sold, earned_per_bar;

double total_earned;

int main(){
    cout << "Number of candy bars sold?: ";
    cin >> amount_sold;
    cout << '\n';

    cout << "amount earned per bar?: ";
    cin >> earned_per_bar;
    cout << '\n';

    total_earned = amount_sold * earned_per_bar;
    cout << "total amound earned: " << total_earned << endl;

    return 0;
}