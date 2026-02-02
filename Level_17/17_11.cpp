#include <iostream>
using namespace std;

int main1711() {
	int arr[4] = { 3,5,4,2 };
	int mask[4];
	int sum = 0;

	for (int i = 0; i < 4; i++)
	{
		cin >> mask[i];
		arr[i] = arr[i] * mask[i];
		sum += arr[i];
	}

	cout << sum;


	return 0;
}