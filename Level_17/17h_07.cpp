#include <iostream>
using namespace std;

int main17007() {
	int levelTable[4][2] = {
		10,20,
		30,60,
		100,150,
		200,300
	};

	int arr[6];
	for (int i = 0; i < 6; i++)
	{
		cin >> arr[i];
	}

	int cnt[4] = { 0 };

	for (int k = 0; k < 6; k++)
	{
		for (int i = 0; i < 4; i++)
		{
			if (arr[k] >= levelTable[i][0] && arr[k] <= levelTable[i][1])
			{
				cnt[i]++;
			}
		}
	}

	for (int i = 0; i < 4; i++)
	{
		cout << "lev" << i << ":" << cnt[i] << endl;
	}

	return 0;
}