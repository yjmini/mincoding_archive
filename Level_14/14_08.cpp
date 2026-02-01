#include <iostream>
using namespace std;

int main1408() {
	char arr[20];
	cin >> arr;

	int len = 0;

	while (arr[len] != '\0')
	{
		len++;
	}

	for (int i = 0; i < len; i++)
	{
		for (int j = i+1; j < len; j++)
		{
			if (arr[i] > arr[j])
			{
				char temp;
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	for (int i = 0; i < len; i++)
	{
		cout << arr[i];
	}

	return 0;
}