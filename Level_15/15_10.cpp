#include <iostream>
using namespace std;

int main1510() {
	char arr[3][11];
	for (int i = 0; i < 3; i++)
	{
		cin >> arr[i];
	}

	int len[3];
	for (int i = 0; i < 3; i++)
	{
		int j = 0;
		while (arr[i][j] !='\0')
		{
			j++;
		}
		len[i] = j;
	}

	for (int i = 0; i < 3; i++)
	{
		cout << len[i] << "=";
		for (int j = 0; j < len[i]; j++)
		{
			cout << arr[i][j];
		}
		cout << endl;
	}

	return 0;
}