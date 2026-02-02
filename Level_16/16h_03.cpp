#include <iostream>
using namespace std;

void maxVal(int arr[2][3], int* y, int* x)
{
	int maxTemp = arr[0][0];
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (maxTemp <= arr[i][j])
			{
				maxTemp = arr[i][j];
				*y = i;
				*x = j;
			}
		}
	}
}

void minVal(int arr[2][3], int* y, int* x)
{
	int minTemp = arr[0][0];
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (minTemp >= arr[i][j])
			{
				minTemp = arr[i][j];
				*y = i;
				*x = j;
			}
		}
	}
}

int main16003() {
	int arr[2][3];
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> arr[i][j];
		}
	}

	int maxY, maxX;
	int minY, minX;

	maxVal(arr, &maxY, &maxX);
	minVal(arr, &minY, &minX);

	cout << "(" << maxY << "," << maxX << ")" << endl;
	cout << "(" << minY << "," << minX << ")" << endl;

	return 0;
}