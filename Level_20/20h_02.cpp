#include <iostream>
using namespace std;

char str[11];

int len;

void printChar(int st, int idx)
{
	for (int i = st; i < idx; i++)
	{
		cout << str[i];
	}
	cout << endl;
	if (st == 0)
	{
		return;
	}
	
	printChar(st - 1, idx);
}

int main20002() {
	cin >> str;

	for (int i = 0; i < 11; i++)
	{
		if (str[i] == '\0')
		{
			len = i;
			break;
		}
	}


	printChar(len-1, len);

	return 0;
}