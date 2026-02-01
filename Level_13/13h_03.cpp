#include <iostream>
using namespace std;

int main13003() {
	int arrA[5];
	int arrB[5];
	int arrC[5];

	for (int i = 0; i < 5; i++)
	{
		cin >> arrA[i];
	}
	for (int i = 0; i < 5; i++)
	{
		cin >> arrB[i];
	}
	for (int i = 0; i < 5; i++)
	{
		cin >> arrC[i];
	}

	for (int i = 0; i < 5; i++)
	{
		cout << arrA[i] * arrB[i] + arrC[i] << " ";
	}


	return 0;
}