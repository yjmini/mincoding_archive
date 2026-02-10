#include <iostream>
#include <vector>
using namespace std;



int main() {
	int arr[4][4];

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cin >> arr[i][j];
		}
	}

	int maxIdx = 0;
	int maxCnt = 0;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			int tempCnt = 0;
			if (arr[i][j] == 1)
			{
				tempCnt++;
				if (maxCnt < tempCnt)
				{
					maxCnt = tempCnt;
					maxIdx = i;
				}
			}
		}
	}

	cout << char(maxIdx + 'A');

	return 0;
}