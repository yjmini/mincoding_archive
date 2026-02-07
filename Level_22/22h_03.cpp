#include <iostream>
#include <cstring>
using namespace std;

int main22003() {
	char arr[3][3][3];
	char ch;
	cin >> ch;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			for (int k = 0; k < 3; k++)
			{
				arr[i][j][k] = (char)(ch + i);
			}
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			for (int k = 0; k < 3; k++)
			{
				cout << arr[i][j][k];
			}
			cout << endl;
		}
		cout << endl;
	}

	return 0;
}