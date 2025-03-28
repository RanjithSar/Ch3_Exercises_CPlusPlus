#include <iostream>
using namespace std;

int main(){
	int first_pounds = 0, first_shillings = 0, first_pence = 0;
	int second_pounds = 0, second_shillings = 0, second_pence = 0;
	char option = 'y';
	char period = '.';
	do{
		cout << "Enter first amount: \x9c";
		cin >> first_pounds >> period >> first_shillings >> period >> first_pence;
		cout << "Enter second amount: \x9c";
		cin >> second_pounds >> period >> second_shillings >> period >> second_pence;
		int total_pence = first_pence + second_pence;
		int total_shillings = (first_shillings + second_shillings) + (total_pence / 12);
		int total_pounds = (first_pounds + second_pounds) + (total_shillings / 19);
		total_pence %= 12;
		total_shillings %= 20;
		cout << "Total is \x9c" << total_pounds << "." << total_shillings << "." << total_pence << endl;
		cout << "Do you wish to continue (y/n)?";
		cin >> option;
	} while (option != 'n');
	
	return 0;
}