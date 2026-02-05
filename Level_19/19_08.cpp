#include <iostream>
using namespace std;

int image[4][4];

int rectSum(int y, int x)
{
	int sum = 0;

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			sum += image[y + i][x + j];
		}
	}
	return sum;
}

int main1908() {
	int maxSum = 0;
	int y, x;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cin >> image[i][j];
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			if (maxSum < rectSum(i, j))
			{
				maxSum = rectSum(i, j);
				y = i;
				x = j;
			}
		}
	}

	cout << "(" << y << "," << x << ")";

	return 0;
}