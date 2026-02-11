#include <iostream>
using namespace std;

int arr[3][3];

void isEqual(int row)
{
	if (row == 3)
	{
		return;
	}
	

	if (arr[row][1] == arr[row][0] && arr[row][1] == arr[row][2])
	{
		cout << arr[row][0] << '\n';
	}
	else
	{
		cout << "x" << '\n';
	}

	isEqual(row + 1);
}

int main() {
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> arr[i][j];
		}
	}

	isEqual(0);

	return 0;
}