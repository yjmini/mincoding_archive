#include <iostream>
using namespace std;

char s[11];

int isEqual(int st, int en)
{
	int mid = en / 2;
	int isEven = en % 2;
	
	if (isEven == 1)
		return 0;

	for (int i = 0; i < mid; i++)
	{
		if (s[i] != s[mid+i])
		{
			return 0;
		}
	}
	return 1;
}

int main20003() {
	cin >> s;

	int len;

	for (int i = 0; i < 11; i++)
	{
		if (s[i] == '\0')
		{
			len = i;
			break;
		}
	}

	if (isEqual(0, len) == 1)
	{
		cout << "동일한문장";
	}
	else
	{
		cout << "다른문장";
	}
	return 0;
}