#include <iostream>
#include <algorithm>
using namespace std;

int arr[4][5];

int main() {
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cin >> arr[i][j];
		}
	}

	int stY=10, stX=10, enY=0, enX=0;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (arr[i][j] == 1)
			{
				stY = min(stY, i);
				stX = min(stX, j);
				enY = max(enY, i);
				enX = max(enX, j);
			}
		}
	}

	cout << "(" << stY << "," << stX << ")" << '\n';
	cout << "(" << enY << "," << enX << ")" << '\n';

	return 0;
}