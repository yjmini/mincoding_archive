#include <iostream>
#include <algorithm>
using namespace std;

int main1515() {
	char arr[2][9];
	for (int i = 0; i < 2; i++)
	{
		cin >> arr[i];
	}

	int len1, len2;

	for (int i = 0; i < 9; i++)
	{
		if (arr[0][i] == '\0')
		{
			len1 = i;
			break;
		}
	}

	for (int i = 0; i < 9; i++)
	{
		if (arr[1][i] == '\0')
		{
			len2 = i;
			break;
		}
	}

	int maxVal = max(len1, len2);
	int cnt = 0;

	for (int i = 0; i < maxVal; i++)
	{
		if (arr[0][i] != arr[1][i])
		{
			cnt++;
		}
	}

	cout << cnt;

	return 0;
}