#include <iostream>
using namespace std;

char str[20];
char ghost[5] = { 'G','H','O','S','T' };

int isExist0(int i)
{
	for (int j = 0; j < 5; j++)
	{
		if (str[i+j] != ghost[j])
		{
			return 1;
		}
	}
	return 0;
}

int main18011() {

	cin >> str;


	int len;

	for (int i = 0; i < 20; i++)
	{
		if (str[i] == '\0')
		{
			len = i;
			break;
		}
	}

	int flag = 0;

	for (int i = 0; i < len-5; i++)
	{
		if (isExist0(i) == 1)
		{
			flag = 1;
		}
		else
		{
			flag = 0;
		}
	}

	if (flag == 1)
	{
		cout << "존재하지 않음";
	}
	else
	{
		cout << "존재";
	}

	return 0;
}