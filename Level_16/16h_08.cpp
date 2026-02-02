#include <iostream>
using namespace std;

int main16008() {
	char arr[2][7] = {
		"A79TKQ",
		"MINCOD"
	};

	char a, b;
	cin >> a >> b;

	int flag1 = 0;
	int flag2 = 0;

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			if (arr[i][j] == a)
			{
				flag1 = 1;
			}
			if (arr[i][j] == b)
			{
				flag2 = 1;
			}
		}
	}

	cout << a << " : ";
	if (flag1==0)
	{
		cout << "없음" << endl;
	}
	else if (flag1 == 1)
	{
		cout << "존재" << endl;
	}
	cout << b << " : ";
	if (flag2 == 0)
	{
		cout << "없음" << endl;
	}
	else if (flag2 == 1)
	{
		cout << "존재" << endl;
	}

	return 0;
}