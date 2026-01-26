#include <iostream>
using namespace std;

int main5111() {

	int arr[5];
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
		sum += arr[i];
	}
	cout << "합은 " << sum << "입니다";

	return 0;
}