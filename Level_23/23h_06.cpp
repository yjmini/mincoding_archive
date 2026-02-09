#include <iostream>
using namespace std;

int main23006() {
	char arr1[4][5];
	for (int i = 0; i < 4; i++)
	{
		cin >> arr1[i];
	}

	char arr2[4][5] = {
		"ABCD",
		"BBAB",
		"CBAC",
		"BAAA"
	};

	int bucket[200] = {0};

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (arr1[i][j] == arr2[i][j])
			{
				bucket[arr1[i][j]]++;
			}
		}
	}

	int maxIdx = 0;
	int maxVal = bucket[0];

	for (int i = 0; i < 200; i++)
	{
		if (bucket[i] > maxVal)
		{
			maxVal = bucket[i];
			maxIdx = i;
		}
	}

	cout << (char)maxIdx;

	return 0;
}