#include <iostream>
using namespace std;

int main902() {
	char arr[3][5] = { {'A','B','C','D','E'}, {'E','A','B','A','B'}, {'A','C','D','E','R'} };
	int cnt = 0;
	char ch;
	cin >> ch;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (arr[i][j] == ch) {
				cnt++;
			}
		}
	}
	if (cnt >= 3) {
		cout << "대발견";
	}
	else if (cnt >= 1) {
		cout << "발견";
	}
	else
	{
		cout << "미발견";
	}

	return 0;
}
