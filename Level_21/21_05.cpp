#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

char nstr[3][11];

int main2105() {
	for (int i = 0; i < 3; i++)
	{
		cin >> nstr[i];

	}

	int len = 0;
	int idx = 0;


	for (int i = 0; i < 3; i++)
	{
		if (len < strlen(nstr[i]))
		{
			len = strlen(nstr[i]);
			idx = i;
		}
	}

	char temp[11];
	strcpy(temp, nstr[0]);
	strcpy(nstr[0], nstr[idx]);
	strcpy(nstr[idx], temp);
	
	for (int i = 0; i < 3; i++)
	{
		cout << nstr[i] << endl;
	}

	return 0;
}