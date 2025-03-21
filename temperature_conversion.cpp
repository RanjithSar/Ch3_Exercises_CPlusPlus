#include <iostream>
using namespace std;

int main(){
	float temperature;
	char option;
	cout << "Type 1 to convert Fahrenheit to Celcius,\n     2 to convert Celcius to Fahrenheit: ";
	cin >> option;
	if (option == '1'){
		cout << "Enter temperature in Fahrenheit: ";
		cin >> temperature;
		float c_temp = (temperature -32) * 5 / 9;
		cout << "In Celcius that's " << c_temp << endl;
	}
	else if (option == '2'){
		cout << "Enter temperature in Celcius: ";
		cin >> temperature;
		float f_temp = (temperature * 9 / 5) + 32;
		cout << "In Fahrenheit that's " << f_temp << endl;
	}
	return 0;
}