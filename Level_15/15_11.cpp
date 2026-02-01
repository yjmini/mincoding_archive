#include <iostream>
using namespace std;

int main1511() {
	char arr[4][6];
	for (int i = 0; i < 4; i++)
	{
		cin >> arr[i];
	}

	int flag1 = 0, flag2 = 0;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (arr[i][j] == 'A')
			{
				flag1 = 1;
			}
			if (arr[i][j] == 'B')
			{
				flag2 = 1;
			}
		}
	}

	if (flag1 == 1 && flag2 == 1)
	{
		cout << "대발견";
	}
	else if (flag1 == 1 || flag2 == 1)
	{
		cout << "중발견";
	}
	else
	{
		cout << "미발견";
	}
	{

	}

	return 0;
}