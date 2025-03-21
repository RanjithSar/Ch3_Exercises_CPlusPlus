#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	long num = 0;
	char ch = '0';
	cout << "Enter a number: ";
	while ((ch = getche()) != '\r'){
		num = (num * 10) + (ch - '0');
	}
	cout << endl;
	cout << "Number is: " << num << endl;
	return 0;
}