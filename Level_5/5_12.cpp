#include <iostream>
using namespace std;

void QTR12() {
	cout << "QTR100%";
}

void BBQ12() {
	cout << "BBQ100%";
}

int main512() {
	int arr[3];
	int sum=0;

	for (int i = 0; i < 3; i++) {
		cin >> arr[i];
		sum += arr[i];
	}

	if (sum >= 10) {
		QTR12();
	}
	else {
		BBQ12();
	}

	return 0;
}