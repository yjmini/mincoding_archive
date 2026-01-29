#include <iostream>
using namespace std;

char arr[4][3] = {
	{'D','A','D'},
	{'Q','W','Q'},
	{'A','S','D'},
	{'A','S','D'},
};

int main12003() {
	char ch;
	cin >> ch;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (arr[i][j] == ch) {
				cout << "존재" << endl;
				return 0;
			}
		}
	}
	cout << "없음" << endl;

	return 0;
}