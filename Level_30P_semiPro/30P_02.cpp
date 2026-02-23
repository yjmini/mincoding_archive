#include <iostream>
using namespace std;

int arr1[3][3];
int arr2[3][3];
int temp[3][3];

void Rotate90()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			temp[2 - j][i] = arr1[i][j];
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			arr1[i][j] = temp[i][j];
		}
	}
}

int isEqual()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (arr1[i][j] != arr2[i][j])
				return 0;
		}
	}
	return 1;
}

int main() {

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> arr1[i][j];
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> arr2[i][j];
		}
	}

	for (int i = 0; i < 4; i++)
	{
		if (isEqual() == 1)
		{
			cout << i;
			return 0;
		}
		Rotate90();
	}

	return 0;
}