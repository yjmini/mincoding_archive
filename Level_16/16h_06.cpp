#include <iostream>
using namespace std;

int main16006() {
	char arr[11];
	cin >> arr;

	int len;

	for (int i = 0; i < 11; i++)
	{
		if (arr[i] == '\0')
		{
			len = i;
			break;
		}
	}

	int maxIdx, minIdx, maxVal, minVal;
	maxIdx = 0;
	minIdx = 0;
	maxVal = arr[0];
	minVal = arr[0];

	for (int i = 0; i < len; i++)
	{
		if (maxVal < arr[i])
		{
			maxIdx = i;
			maxVal = arr[i];
		}
		if (minVal > arr[i])
		{
			minIdx = i;
			minVal = arr[i];
		}
	}

	cout << maxIdx << endl << minIdx;

	return 0;
}