#include <iostream>
using namespace std;


int main771() {
	
	int n; 
	cin >> n;

	for (int i = 0; i < 6; i++) {
		if (i < 3) {
			for (int j = 0; j < 5; j++) {
				cout << n;
			}
		}
		else {
			for (int j = 0; j < 3; j++) {
				cout << n;
			}
		}
		cout << endl;
	}

	return 0;
}