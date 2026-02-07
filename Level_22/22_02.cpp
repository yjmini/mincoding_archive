#include <iostream>
#include <cstring>
using namespace std;

int main2202() {
	char str[3][11];
	for (int i = 0; i < 3; i++)
	{
		cin >> str[i];
	}

	if (strcmp(str[0], str[1]) == 0 && strcmp(str[0], str[2]) == 0)
	{
		cout << "WOW";
	}
	else if (strcmp(str[0], str[1]) != 0 && strcmp(str[0], str[2]) != 0 && strcmp(str[1], str[2]) != 0)
	{
		cout << "BAD";
	}
	else
	{
		cout << "GOOD";
	}

	return 0;
}
