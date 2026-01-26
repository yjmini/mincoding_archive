#include <iostream>
using namespace std;

int main669() {
	int a;
	cin >> a;
	
	int arr[6] = { 5,4,1,2,7,8 };

	for (int i = 0; i < a; i++) {
		for (int j = 5; j >= 0; j--) {
			cout << arr[j] << " ";
		}
		cout << endl;
	}

	return 0;
}