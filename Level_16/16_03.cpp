#include <iostream>
using namespace std;

int main1603() {
	char arr[6];
	cin >> arr;
	int n;
	cin >> n;
	int len;

	for (int i = 0; i < 6; i++)
	{
		if (arr[i] == '\0')
		{
			len = i;
			break;
		}
	}

	for (int i = len; i > n; i--)
	{
		arr[i] = arr[i - 1];
	}

	arr[n] = 'A';

	for (int i = 0; i < len+1; i++)
	{
		cout << arr[i];
	}

	return 0;
}