#include <iostream>
using namespace std;

int main18008() {
	char arr[3][10];
	for (int i = 0; i < 3; i++)
	{
		cin >> arr[i];
	}

	int bucket[200] = { 0 };

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (arr[i][j] == '\0')
			{
				break;
			}
			bucket[arr[i][j]]++;
		}
	}

	int flag = 0;

	for (int i = 0; i < 200; i++)
	{
		if (bucket[i] >= 2)
		{
			flag = 1;
			break;
		}
	}

	if (flag == 1)
	{
		cout << "No";
	}
	else
	{
		cout << "Perfect";
	}

	return 0;
}