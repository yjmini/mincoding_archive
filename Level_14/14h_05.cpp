#include <iostream>
using namespace std;

int main14005() {
	char arr[6];
	char arr2[6];

	cin >> arr >> arr2;

	char result[11];

	int a = 0, b = 0;

	while (arr[a]!='\0')
	{
		a++;
	}
	while (arr2[b]!='\0')
	{
		b++;
	}
	for (int i = 0; i < a; i++)
	{
		for (int j = i+1; j < a; j++)
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
	for (int i = 0; i < b; i++)
	{
		for (int j = i+1; j < b; j++)
		{
			if (arr2[i] > arr2[j])
			{
				char temp;
				temp = arr2[i];
				arr2[i] = arr2[j];
				arr2[j] = temp;
			}
		}
	}

	int k = 0;
	for (int i = 0; i < a; i++)
	{
		result[k] = arr[i];
		k++;
	}
	for (int i = 0; i < b; i++)
	{
		result[k] = arr2[i];
		k++;
	}
	
	for (int i = 0; i < k; i++)
	{
		cout << result[i];
	}

	return 0;
}