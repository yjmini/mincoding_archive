#include <iostream>
using namespace std;

int main1512() {
	char arr[2][6];
	char result[12];

	for (int i = 0; i < 2; i++)
	{
		cin >> arr[i];
	}

	int t = 0;

	for (int i = 0; i < 6; i++)
	{
		if (arr[0][i] != '\0')
		{
			result[t] = arr[0][i];
			t++;
		}
		else
		{
			break;
		}
	}

	for (int i = 0; i < 6; i++)
	{
		if (arr[1][i] != '\0')
		{
			result[t] = arr[1][i];
			t++;
		}
		else
		{
			break;
		}
	}

	for (int i = 0; i < t; i++)
	{
		cout << result[i];
	}

	return 0;
}