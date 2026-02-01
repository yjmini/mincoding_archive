#include <iostream>
using namespace std;

int main15012() {
	int arr[4][4];
	int n;
	cin >> n;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (i % 2 == 0)
			{
				arr[i][j] = n;
			}
			else
			{
				arr[i][4 - j - 1] = n;
			}
			n++;
		}
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