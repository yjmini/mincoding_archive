#include <iostream>
using namespace std;

int main888() {
	int arr[6][3];
	int a, b;
	cin >> a >> b;

	for (int i = 0; i < 6; i++)
	{
		if (i < 3)
		{
			for (int j = 0; j < 3; j++)
			{
				arr[i][j] = a;
				cout << arr[i][j];
			}
		}
		else
		{
			for (int j = 0; j < 3; j++)
			{
				arr[i][j] = b;
				cout << arr[i][j];
			}
		}
		cout << endl;

	}


	return 0;
}