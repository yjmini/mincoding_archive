#include <iostream>
using namespace std;

char arr[4] = { 'M','T','K','C' };

int isExist(char ch) {
	for (int i = 0; i < 4; i++)
	{
		if (arr[i] == ch) 
		{
			return 1;
		}
	}
	return 0;
}

int main1701() {
	char ch;
	cin >> ch;

	if (isExist(ch) == 1)
	{
		cout << "발견";
	}
	else
	{
		cout << "미발견";
	}

	return 0;
}