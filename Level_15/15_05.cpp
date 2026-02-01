#include <iostream>
using namespace std;

int main1505() {
	char arr[4][7];
	int len[4];
	for (int i = 0; i < 4; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < 4; i++)
	{
		int j = 0;
		while (arr[i][j] !='\0')
		{
			j++;
		}
		len[i] = j;
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = i+1; j < 4; j++)
		{
			if (len[i] > len[j])
			{
				int temp;
				temp = len[i];
				len[i] = len[j];
				len[j] = temp;
			}
		}
	}

	for (int i = 0; i < 4; i++)
	{
		cout << len[i] << " ";
	}


	return 0;
}