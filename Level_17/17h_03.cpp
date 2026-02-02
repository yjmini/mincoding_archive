#include <iostream>
using namespace std;

int isSame(int len[2], char names[2][10]) {
	for (int i = 0; i < len[0]; i++)
	{
		if (names[0][i] != names[1][i])
		{
			return 0;
			break;
		}
	}
	return 1;
}

int main17003() {
	char names[2][10];
	for (int i = 0; i < 2; i++)
	{
		cin >> names[i];
	}

	int len[2];
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (names[i][j] == '\0')
			{
				len[i] = j;
				break;
			}
		}
	}

	if (len[0] == len[1])
	{
		if (isSame(len, names) == 1)
		{
			cout << "동명";
		}
		else
		{
			cout << "남남";
		}
	}
	else
	{
		cout << "남남";
	}

	return 0;
}