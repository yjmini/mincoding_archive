#include <iostream>
using namespace std;

int main15009() {
	int arr[2][3];
	int temp[6];

	int idx = 0;

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> arr[i][j];
			temp[idx] = arr[i][j];
			idx++;
		}
	}

	for (int i = 0; i < 6; i++)
	{
		for (int j = i+1; j < 6; j++)
		{
			if (temp[i] > temp[j])
			{
				int t;
				t = temp[i];
				temp[i] = temp[j];
				temp[j] = t;
			}
		}
	}

	idx = 0;

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			arr[i][j] = temp[idx];
			cout << arr[i][j] << " ";
			idx++;
		}
		cout << endl;
	}

	return 0;
}