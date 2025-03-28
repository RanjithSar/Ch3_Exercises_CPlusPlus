#include <iostream>
using namespace std;

int main(){
	int a = 0, b = 0, c = 0, d = 0;
	char option = 'y';
	char op = '+';
	int final_num = 0, final_den = 0;
	char fraction_bar = '/';
	do{
		cin >> a >> fraction_bar >> b >> op >> c >> fraction_bar >> d;
		switch(op){
			case '+':
				final_num = ((a*d)+(b*c));
				final_den = b*d;
				break;
			case '-':
				final_num = ((a*d)-(b*c));
				final_den = b*d;
				break;
			case '*':
				final_num = a*c;
				final_den = b*d;
				break;
			case '/':
				final_num = a*d;
				final_den = b*c;
				break;
			default:
				cout << "Unrecognized operation." << endl;
		}
		while (final_num % 2 == 0 && final_den % 2 == 0){
			final_num /= 2;
			final_den /= 2;
		}
		cout << "Ans = " << final_num << "/" << final_den << endl;
		cout << "Do another (y/n)? ";
		cin >> option;
	}while (option != 'n');
	return 0;
}