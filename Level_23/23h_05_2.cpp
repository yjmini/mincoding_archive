#include <iostream>
using namespace std;

int main23005_2()
{
	int arr[8];
	for (int i = 0; i < 8; i++)
	{
		cin >> arr[i];
	}

	int pivot = arr[0];
	int a = 1;
	int b = 7;

	while (1)
	{
		for (a = a; a < 8; a++)
		{
			if (arr[a] > pivot) break;
		}

		for (b = b; b >= 1; b--)
		{
			if (arr[b] < pivot) break;
		}

		if (a > b) break;

		swap(arr[a], arr[b]);
	}

	swap(arr[0], arr[b]);

	for (int i = 0; i < 8; i++)
	{
		cout << arr[i] << " ";
	}

	return 0;
}