#include <iostream>
#include <string>
using namespace std;

int quantity;
double price = 12.99;
double discount;



int main(){
    cout << "How much coffee are you buying?: ";
    cin >> quantity;
    cout << '\n';

    if(quantity < 10 && quantity > 0){
	discount = 0.05;
    }

    else if(quantity < 20 && quantity > 0){
	discount = 0.1;
    }
    
    else if(quantity < 30 && quantity > 0){
	discount = 0.15;
    }

    else if(quantity >= 30){
	discount = 0.2;
    }

    else{
	cout << "Error, please try again" << endl;
	return 0;
    }
    
    price = price*quantity;
    double discounted_price = price*discount;

    cout << "Your total is: " << price - discounted_price << endl;

    return 0;
}

