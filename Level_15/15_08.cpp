#include <iostream>
using namespace std;

int main1508() {
	char arr[5][11];
	int len[5];

	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];

		int idx = 0;
		while (arr[i][idx] != '\0')
		{
			idx++;
		}
		len[i] = idx;
	}

	int max = len[0];
	int maxIdx = 0;
	for (int i = 1; i < 5; i++)
	{
		if (max < len[i])
		{
			max = len[i];
			maxIdx = i;
		}
	}

	int k = 0;
	while (arr[maxIdx][k] != '\0')
	{
		cout << arr[maxIdx][k];
		k++;
	}





	return 0;
}