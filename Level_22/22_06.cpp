#include <iostream>
#include <cstring>
using namespace std;


int main2206() {
	char str4[4][20];
	for (int i = 0; i < 4; i++)
	{
		cin >> str4[i];
	}

	int longIdx = 0;
	int shortIdx = 0;

	for (int i = 0; i < 4; i++)
	{
		if (strlen(str4[i]) > strlen(str4[longIdx]))
		{
			longIdx = i;
		}
		else if (strlen(str4[i]) < strlen(str4[shortIdx]))
		{
			shortIdx = i;
		}
		
	}

	cout << "긴문장:" << longIdx << endl;
	cout << "짧은문장:" << shortIdx << endl;

	return 0;
}