#include <iostream>
using namespace std;

int main13002() {
	int arr[7] = { 4, 2, 5, 1, 6, 7, 3 };
	char a, b;
	cin >> a >> b;

	int idxA = a - 'A';
	int idxB = b - 'A';

	int sum = 0;

	if (idxA > idxB)
	{
		int temp;
		temp = idxA;
		idxA = idxB;
		idxB = temp;
	}

	for (int i = idxA+1; i < idxB; i++)
	{
		sum += arr[i];
	}

	cout << sum;

	return 0;
}