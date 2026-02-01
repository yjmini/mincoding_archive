#include <iostream>
using namespace std;

int main1509() {
	char arr[3][9] = { "BBQWORLD", "KFCAPPLE", "LOT" };
	char ch;
	cin >> ch;

	int cnt = 0;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (arr[i][j] == ch)
			{
				cnt++;
			}
		}
	}

	cout << cnt;

	return 0;
}