#include <iostream>
using namespace std;


int main1601() {
	char arr[3][10];
	int len[3];
	for (int i = 0; i < 3; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (arr[i][j] == '\0')
			{
				len[i] = j;
				break;
			}

		}
	}

	for (int i = 0; i < 3; i++)
	{
		cout << arr[i][len[i] - 1];
	}

	return 0;
}