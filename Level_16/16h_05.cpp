#include <iostream>
using namespace std;

int main16005() {
	char arr[10];
	cin >> arr;

	char a, b;
	cin >> a >> b;

	int len;

	for (int i = 0; i < 10; i++)
	{
		if (arr[i] == '\0')
		{
			len = i;
			break;
		}
	}

	for (int i = 0; i < len; i++)
	{
		if (arr[i] == a)
		{
			arr[i] = b;
		}
	}

	cout << arr;

	return 0;
}