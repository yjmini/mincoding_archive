#include <iostream>
using namespace std;

int main1709() {
	int vect[3][3] = {
		3,7,4,
		2,2,4,
		2,2,5
	};

	int target[3];
	for (int i = 0; i < 3; i++)
	{
		cin >> target[i];
	}

	int cnt[3] = { 0 };

	for (int k = 0; k < 3; k++)
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (vect[i][j] == target[k])
				{
					cnt[k]++;
				}
			}
		}
	}

	int maxVal = cnt[0];
	int maxIdx = 0;

	for (int i = 0; i < 3; i++)
	{
		if (maxVal < cnt[i])
		{
			maxVal = cnt[i];
			maxIdx = i;
		}
	}

	cout << target[maxIdx];

	return 0;
}