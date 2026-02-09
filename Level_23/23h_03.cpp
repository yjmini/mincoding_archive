#include <iostream>
using namespace std;



int main23003() {
	int arr[4][4] = { 0 };
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> arr[i][j];
		}
	}



	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			arr[i][3] += arr[i][j];
			arr[3][i] += arr[j][i];


		}
	}


	for (int k = 0; k < 3; k++)
	{
		arr[3][3] += arr[k][k];
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}