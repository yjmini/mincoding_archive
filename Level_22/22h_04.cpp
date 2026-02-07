#include <iostream>
using namespace std;


int main22004() {
	int a, b;
	cin >> a >> b;

	int arr[3][2][3];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			for (int k = 0; k < 3; k++)
			{
				if (j == 0)
				{
					arr[i][j][k] = a;
				}
				else if (j == 1)
				{
					arr[i][j][k] = b;
				}

			}
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			for (int k = 0; k < 3; k++)
			{
				cout << arr[i][j][k] << " ";
			}
			cout << endl;
		}
		cout << endl;
	}

	return 0;
}