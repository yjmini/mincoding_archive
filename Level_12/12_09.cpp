#include <iostream>
using namespace std;

int main1209() {
	int arr[3][3] = { 0 };
	char ch;
	cin >> ch;
	int n = 1;

	if (ch >= '0' && ch <= '9')
	{
		for (int i = 2; i >=0; i--)
		{
			for (int j = 2; j >=i; j--)
			{
				arr[i][j] = n;
				n++;
			}
		}
	}
	else if (ch >= 'A' && ch <= 'Z')
	{
		for (int i = 2; i >=0; i--)
		{
			for (int j = 0; j <= i; j++)
			{
				arr[i][j] = n;
				n++;
			}
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (arr[i][j] == 0) {
				cout << " ";
			}
			else {
				cout << arr[i][j];
			}

		}
		cout << endl;
	}

	return 0;
}