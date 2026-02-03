#include <iostream>
using namespace std;

int main18009() {
	char arr[11];
	cin >> arr;

	int bucket[200] = { 0 };

	for (int i = 0; i < 11; i++)
	{
		if (arr[i] == '\0')
		{
			break;
		}
		bucket[arr[i]]++;
	}

	for (int i = 0; i < 200; i++)
	{
		if (bucket[i] > 0)
		{
			cout << (char)i;
		}
	}

	return 0;
}