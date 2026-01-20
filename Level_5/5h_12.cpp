#include <iostream>
using namespace std;

int main5122(){
	int arr[6] = { 0 };
	int a, b;
	cin >> a >> b;

	for (int i = 0; i < b-a+1; i++) {
		arr[i] = a+i;
		cout << arr[i];
	}


	return 0;
}