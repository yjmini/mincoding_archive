#include <iostream>
using namespace std;

char arr[3][5] = { {'D','A','C','C','D'}, {'S','D','F','A','E'}, {'E','E','T','J','H'} };

int main10004() {
	char ch;
	cin >> ch;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (arr[i][j] == ch) {
				cout << "있음";
				return 0;
			}
		}
	}

	cout << "없음";

	return 0;

}
