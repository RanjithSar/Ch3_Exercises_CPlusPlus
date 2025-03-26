#include <iostream>
using namespace std;

int main(){
	const int num_chars = 39;
	int num_x = 1;
	for (int i = 0; i < 20; i++){
		int num_space = (num_chars - num_x) / 2;
		int j;
		for (j = 0; j < num_space; j++){
			cout << " ";
		}
		for (j = 0; j < num_x; j++){
			cout << "X";
		}
		num_x += 2;
		cout << endl;
	}
	return 0;
}