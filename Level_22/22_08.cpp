#include <iostream>
using namespace std;


int main2208() {
	int arr3d[3][2][2] = {
		{
			2,4,
			1,5
		},
		{
			2,3,
			3,6
		},
		{
			7,3,
			1,5
		}
	};

	int n;
	cin >> n;
	int maxVal = arr3d[n][0][0];
	int minVal = arr3d[n][0][0];

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			if (maxVal < arr3d[n][i][j])
			{
				maxVal = arr3d[n][i][j];
			}
			else if (minVal > arr3d[n][i][j])
			{
				minVal = arr3d[n][i][j];
			}
		}
	}

	cout << "MAX=" << maxVal << endl;
	cout << "MIN=" << minVal << endl;

	return 0;
}