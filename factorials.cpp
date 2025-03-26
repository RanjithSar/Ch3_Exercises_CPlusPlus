#include <iostream>
using namespace std;

int main(){
	while (1==1){
		unsigned int numb=0;
		unsigned long fact = 1;
		cout << "Enter a number: ";
		cin >> numb;
		if (numb == 0){
			break;
		}
		for (int j = numb; j > 0; j--){
			fact *= j;
		}
		cout << "Factorial is " << fact << endl;
	}
	return 0;
}