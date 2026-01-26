#include <iostream>
using namespace std;

int main11107() {
	char arr[3][3] = { {'a','b','d'}, {'e','w','z'}, {'q','v','a'} };
	char ch;
	cin >> ch;
	bool flag = false;

	ch = ch - 'A' + 'a';

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (arr[i][j] == ch) {
				flag = true;
			}
		}
	}

	if (flag) {
		cout << "존재";
	}
	else {
		cout << "없음";
	}

	return 0;
}