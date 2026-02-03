#include <iostream>
using namespace std;

int main18003() {
	char arr[11];
	cin >> arr;

	int bucket[200] = { 0 };

	for (int i = 0; i < 11; i++)
	{
		bucket[arr[i]]++;
	}

	int maxVal = bucket[0];
	int maxIdx = 0;

	for (int i = 0; i < 200; i++)
	{
		if (maxVal < bucket[i])
		{
			maxVal = bucket[i];
			maxIdx = i;
		}
	}

	cout << (char)maxIdx;

	return 0;
}