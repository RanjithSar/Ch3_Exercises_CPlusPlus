#include <iostream>
using namespace std;

int main(){
	float num1 = 0, num2 = 0, ans = 0;
	char operation;
	char more;
	do{
		cout << "Enter first number, operator, second number: ";
		cin >> num1 >> operation >> num2;
		if (operation == '/' && num2 == 0){
			cout << "Illegal divisor!" << endl;
			continue;
		}
		switch(operation){
			case '+':
				ans = num1 + num2;
				cout << "Answer = " << ans << endl;
				break;
			case '-':
				ans = num1 - num2;
				cout << "Answer = " << ans << endl;
				break;
			case '*':
				ans = num1 * num2;
				cout << "Answer = " << ans << endl;
				break;
			case '/':
				ans = num1 / num2;
				cout << "Answer = " << ans << endl;
				break;
			default:
				break;
		}
		cout << "Do another (y/n)? ";
		cin >> more;
	} while (more != 'n');
	
	return 0;
	
}