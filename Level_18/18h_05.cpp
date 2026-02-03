#include <iostream>
using namespace std;

int main18005() {
	char arr[10] = { "ATKPTCABC" };
	char a, b;
	cin >> a >> b;

	int idx1, idx2;

	for (int i = 0; i < 10; i++)
	{
		if (arr[i] == a)
		{
			idx1 = i;
			break;
		}
	}

	for (int i = 8; i >= 0; i--)
	{
		if (arr[i] == b)
		{
			idx2 = i;
			break;
		}
	}

	cout << idx2 - idx1;


	return 0;
}