#include <iostream>
using namespace std;

int main23004_2()
{
	int arr[3][4] = {
	3,5,4,1,
	1,1,2,3,
	6,7,1,2
	};

	int input[4];
	for (int i = 0; i < 4; i++)
	{
		cin >> input[i];
	}

	int change[10];

	for (int i = 0; i < 10; i++)
	{
		change[i] = i;
	}

	for (int i = 0; i < 3; i++)
	{
		change[input[i]] = input[i+1]; 
	}
	change[input[3]] = input[0];

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			arr[i][j] = change[arr[i][j]];
		}
	}


	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}


	return 0;
}