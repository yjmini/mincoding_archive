#include <iostream>
#include <cstring>
using namespace std;

int main21003() {
	char arr[20];
	char a, b;
	cin >> arr;
	cin >> a >> b;

	int len = strlen(arr);
	int idx1=0, idx2=0;

	for (int i = 0; i < len; i++)
	{
		if (arr[i] == a)
		{
			idx1 = i;
		}
		if (arr[i] == b)
		{
			idx2 = i;
		}
	}

	if (idx1 == 0)
	{
		arr[idx1 + 1] = '#';
	}
	else
	{
		arr[idx1 - 1] = '#';
		arr[idx1 + 1] = '#';
	}
	if (idx2 == len - 1)
	{
		arr[idx2 - 1] = '#';
	}
	else
	{
		arr[idx2 - 1] = '#';
		arr[idx2 + 1] = '#';
	}

	cout << arr;

	return 0;
}