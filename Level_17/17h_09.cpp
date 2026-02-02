#include <iostream>
using namespace std;

int main17009() {
	int arr[6];
	int mask[6] = { 1,0,1,0,1,0 };
	for (int i = 0; i < 6; i++)
	{
		cin >> arr[i];
		arr[i] = arr[i] * mask[i];
	}

	int minVal = arr[0];
	int minIdx = 0;

	for (int i = 0; i < 6; i++)
	{
		if (minVal > arr[i] && arr[i] !=0)
		{
			minVal = arr[i];
			minIdx = i;
		}
	}

	cout << "arr[" << minIdx << "]=" << minVal;

	return 0;
}