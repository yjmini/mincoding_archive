#include <iostream>
using namespace std;

int main11109() {
	int arr[2][3];
	for (int i = 1; i >=0; i--)
	{
		for (int j = 2; j >=0; j--)
		{
			cin >> arr[i][j];
		}
	}

	int arr2[6];
	int idx = 0;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			arr2[idx] = arr[i][j];
			idx++;
		}
	}

	int temp;
	temp = arr2[5];
	arr2[5] = arr2[0];
	arr2[0] = temp;

	for (int i = 0; i < 6; i++)
	{
		cout << arr2[i] << " ";
	}

	return 0;
}