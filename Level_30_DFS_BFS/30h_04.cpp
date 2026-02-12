#include <iostream>
#include <cstring>
using namespace std;

char strs[3][31];

int main() {
	for (int i = 0; i < 3; i++)
	{
		cin >> strs[i];
	}

	int maxIdx = 0;
	int maxLen = strlen(strs[0]);

	for (int i = 1; i < 3; i++)
	{
		if (maxLen < strlen(strs[i]))
		{
			maxLen = strlen(strs[i]);
			maxIdx = i;
		}
		else if (maxLen == strlen(strs[i]))
		{
			if (strcmp(strs[maxIdx], strs[i]) <= 0)
			{
				maxIdx = i;
				maxLen = strlen(strs[i]);
			}
		}
	}

	cout << strs[maxIdx];

	return 0;
}