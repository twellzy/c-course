#include <iostream>
#include <string>
using namespace std;
double balance;
double shiftAmount;
double interestRate;
double startBalance;
double endBalance;

int main(){
	for(int i = 1; i != 7; i++){
		if(i == 1){
			while(balance <= 0){
				cout << "Starting Balance: ";
				cin >> balance;
				cout << endl;
		
				cout << "Interest Rate: ";
				cin >> interestRate;
				cout << endl;
				if(balance <= 0 || interestRate <= 0){
					cout << "Error: balance or interest ratecan't be equal to or less than zero" << endl;
				}
			}
		}

		startBalance = balance;
	
		do{
			cout << "Amount deposited during month " << i << ": ";
			cin >> shiftAmount;
			cout << endl;
		
			if(shiftAmount < 0){
				cout << "Error try again" << endl;
			}
		}
		while(shiftAmount < 0);
	
		balance += shiftAmount;
		shiftAmount = 0;
	
		do{		
			cout << "Amount withdrawn during month " << i << ": ";
			cin >> shiftAmount;
			cout << endl;

			if(shiftAmount < 0){
				cout << "Error try again" << endl;
			}
		}
		while(shiftAmount < 0);
	
		balance -= shiftAmount;
		shiftAmount = 0;
		endBalance = balance;

		interestRate = interestRate/12;
		balance += (endBalance/startBalance)*interestRate;
		cout << "Balance + interestRate: " << balance << endl;
	}
	return 0;
}
