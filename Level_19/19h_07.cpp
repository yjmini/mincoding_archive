#include <iostream>
#include <vector>
using namespace std;

int map1[3][3] = {
	3,5,1,
	3,8,1,
	1,1,5
};

int bitarray[2][2];

int maskingSum(int y, int x)
{
	int sum = 0;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			sum = sum + map1[i + y][j + x] * bitarray[i][j];
		}
	}
	return sum;
}

int main19007() {
	int maxSum = -21e8;
	int y;
	int x;

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cin >> bitarray[i][j];
		}
	}

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			if (maxSum < maskingSum(i, j))
			{
				maxSum = maskingSum(i, j);
				y = i;
				x = j;
			}
		}
	}

	cout << "(" << y << "," << x << ")";

	return 0;
}