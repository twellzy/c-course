#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

double adult_ticket = 12;
double kid_ticket = 5;
double adult_concessions = 8.50;
double kid_concessions = 10.50;

double adult_total = adult_ticket + adult_concessions;
double kid_total = kid_ticket + kid_concessions;

int main(){
    cout << "%" << (adult_ticket/adult_total)*100 << " of evening show income comes from ticket sales.\n";
    cout << "%" << (adult_concessions/adult_total)*100 << " of evening show income comes from concession sales.\n";

    cout << "%" << (kid_ticket/kid_total)*100 << " of kids shows income comes from ticket sales.\n";
    cout << "%" << (kid_concessions/kid_total)*100 << " of kids show income comes from concession sales.\n";
    return 0;
}