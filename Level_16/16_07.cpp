#include <iostream>
using namespace std;

int main1607() {
	char arr[3][11];
	for (int i = 0; i < 3; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 11; j++)
		{
			if (arr[i][j] == 'M')
			{
				cout << "M이 존재합니다";
				return 0;
			}
		}
	}

	cout << "M이 존재하지 않습니다";

	return 0;
}