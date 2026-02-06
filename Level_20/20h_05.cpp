#include <iostream>
using namespace std;

int main20005() {
	char ch;
	cin >> ch;

	for (int i = ch-3; i <= ch+3; i++)
	{
		char t = i;
		if (i < 'A')
		{
			t = t + 26;
		}
		else if (i > 'Z')
		{
			t = t - 26;
		}
		cout << t;
	}

	return 0;
}