#include <iostream>
using namespace std;

int py, px;

int arr[4][5] = {
	3,5,4,2,5,
	3,3,3,2,1,
	3,2,6,7,8,
	9,1,1,3,2
};

int pSum(int y, int x)
{
	int sum = 0;
	for (int i = 0; i < py; i++)
	{
		for (int j = 0; j < px; j++)
		{
			sum = sum + arr[y+i][x+j];
		}
	}
	return sum;
}

int main20009() {
	cin >> py >> px;

	int maxVal = 0;
	int y, x;

	for (int i = 0; i < 4 - py + 1; i++)
	{
		for (int j = 0; j < 5 - px + 1; j++)
		{
			if (maxVal < pSum(i, j))
			{
				maxVal = pSum(i, j);
				y = i;
				x = j;
			}
		}
	}

	cout << "(" << y << "," << x << ")";

	return 0;
}