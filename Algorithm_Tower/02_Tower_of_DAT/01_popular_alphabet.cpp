#include <iostream>
using namespace std;


int main() {
	char arr[9];
	cin >> arr;

	int bucket[200] = { 0 };

	for (int i = 0; i < 9; i++)
	{
		bucket[arr[i]]++;
	}

	int maxIdx = 0;
	int maxVal = bucket[0];

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