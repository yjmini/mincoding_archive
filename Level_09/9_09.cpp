#include <iostream>
using namespace std;

int main909() {
	char arr[2][3] = { {'F','E','W'}, {'D','C','A'} };
	int cnt = 0;
	char ch;
	cin >> ch;

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (arr[i][j] == ch)
			{
				cnt++;
			}
		}
	}
	if (cnt > 0) {
		cout << "발견";
	}
	else {
		cout << "미발견";
	}

	return 0;
}