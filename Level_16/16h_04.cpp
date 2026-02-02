#include <iostream>
using namespace std;

int main16004() {
	int arr[6];
	int a, b;
	cin >> a >> b;

	arr[0] = a;
	arr[1] = b;

	for (int i = 1; i < 5; i++)
	{
		arr[i + 1] = arr[i] * arr[i - 1];
	}

	cout << arr[5];

	return 0;
}