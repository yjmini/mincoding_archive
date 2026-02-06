#include <iostream>
#include <vector>
using namespace std;

int main20007() {
	char str[100];
	cin >> str;

	int len;
	for (int i = 0; i < 100; i++)
	{
		if (str[i] == '\0')
		{
			len = i;
			break;
		}
	}

	for (int i = 0; i < len; i++)
	{
		for (int  j = 0; j <= i; j++)
		{
			cout << str[j];
		}
		cout << endl;
	}

	return 0;
}