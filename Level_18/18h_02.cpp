#include <iostream>
using namespace std;

int main18002() {
	int arr[6];
	for (int i = 0; i < 6; i++)
	{
		cin >> arr[i];
	}

	int bucket[10] = { 0 };

	for (int i = 0; i < 6; i++)
	{
		bucket[arr[i]]++;
	}

	int flag = 0;

	for (int i = 0; i < 10; i++)
	{
		if (bucket[i] >= 2)
		{
			flag = 1;
			break;
		}
		flag = 0;
	}

	if (flag == 1)
	{
		cout << "도플갱어 발견";
	}
	else
	{
		cout << "미발견";
	}

	return 0;
}