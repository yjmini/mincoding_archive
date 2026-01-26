#include <iostream>
using namespace std;

int main904() {
	int arr[6] = { 3, 4, 2, 5, 7, 9 };

	int a, b;
	cin >> a >> b;

	int temp;
	temp = arr[a];
	arr[a] = arr[b];
	arr[b] = temp;

	for (int i = 0; i < 6; i++)
	{
		cout << arr[i] << " ";
	}

	return 0;
}