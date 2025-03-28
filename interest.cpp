#include <iostream>
using namespace std;

int main(){
	float initial_amt = 0.0;
	int years = 0;
	float interest_rate = 0.0;
	cout << "Enter initial amount: ";
	cin >> initial_amt;
	cout << "Enter number of years: ";
	cin >> years;
	cout << "Enter interest (percent per year): ";
	cin >> interest_rate;
	
	float total = initial_amt;
	for (int i = 0; i < years; i++){
		total += (total * (interest_rate / 100));
	}
	cout << "At the end of " << years << " years, you will have " << total << " dollars." << endl;
	return 0;
}