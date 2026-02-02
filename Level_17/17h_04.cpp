#include <iostream>
using namespace std;

char arr[2][3] = {
	{'G','K','T'},
	{'P','A','C'}
};


int isExist0(char ch) 
{
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (arr[i][j] == ch)
			{
				return 1;
			}
		}
	}
	return 0;
}

int main17004() {

	char a, b;
	cin >> a >> b;

	if (isExist0(a) == 1 && isExist0(b) == 1)
	{
		cout << "대발견";
	}
	else if (isExist0(a) == 1 || isExist0(b) == 1)
	{
		cout << "중발견";
	}
	else
	{
		cout << "미발견";
	}

	return 0;
}