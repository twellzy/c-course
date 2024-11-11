#include <string>
#include <iostream>
using namespace std;

double farenheit(double celsius){
	return (celsius*1.8) + 32;   //Return farenheit temp
}


// Start of program ------- Entry
int main(){
	double celsius;
	
	cout << "enter celsius temp: ";
	cin >> celsius;
	cout << endl;	

	
	cout << "celsius temp converted to farenheit: " << farenheit(celsius) << endl;
	return 0;

}


