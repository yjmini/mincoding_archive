#include <iostream>
using namespace std;

int main12005() {
	int arr[5][5] = {
		{4,5,4,5,4},
		{8,9,8,9,8},
		{1,2,1,2,1},
		{4,5,4,5,4},
		{6,7,6,7,6}
	};
	int x[5] = { 0 };
	int y[5] = { 0 };

	for (int i = 0; i < 5; i++)
	{
		cin >> y[i] >> x[i];
	}
	for (int i = 0; i < 5; i++)
	{

		arr[y[i]][x[i]]++;
		if (arr[y[i]][x[i]] == 10) {
			arr[y[i]][x[i]] = 0;
		}

	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << arr[i][j];
		}
		cout << endl;
	}

	return 0;
}