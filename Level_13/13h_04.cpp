#include <iostream>
using namespace std;

int main13004() {
	int arr[4][4] = {
		{3,4,1,6},
		{3,5,3,6},
		{0,0,0,0},
		{5,4,6,0},
	};

	for (int i = 0; i < 4; i++)
	{
		cin >> arr[2][i];
	}

	int max = arr[0][0];
	int maxY, maxX, minY, minX;
	int min = arr[0][0];

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (arr[i][j] > max) {
				max = arr[i][j];
				maxY = i;
				maxX = j;
			}
			if (arr[i][j] < min)
			{
				min = arr[i][j];
				minY = i;
				minX = j;
			}
		}
	}

	cout << "MAX=" << max << "(" << maxY << "," << maxX << ")" << endl;
	cout << "MIN=" << min << "(" << minY << "," << minX << ")" << endl;

	return 0;
}