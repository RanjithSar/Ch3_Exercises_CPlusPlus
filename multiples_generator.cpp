#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int num;
	cout << "Enter a number: ";
	cin >> num;
	for (int i = 0; i < 20; i++){
		for (int j = 0; j < 10; j++){
			cout << right << setw(4) << num << "  ";
			num += 7;
		}
		cout << endl;
	}
}