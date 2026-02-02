#include <iostream>
using namespace std;

int main1605() {
	char arr[8];
	cin >> arr;
	int n;
	cin >> n;

	int len;

	for (int i = 0; i < 8; i++)
	{
		if (arr[i] == '\0')
		{
			len = i;
			break;
		}
	}

	for (int i = n; i < len; i++)
	{
		arr[i] = arr[i + 1];
	}

	cout << arr;

	return 0;
}