#include <iostream>
using namespace std;

int main1802() {
	int arr[3][3];
	int bucket[10] = { 0 };

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> arr[i][j];
			bucket[arr[i][j]]++;
		}
	}

	for (int i = 1; i < 10; i++)
	{
		if (bucket[i] == 0)
		{
			cout << i << " ";
		}
	}


	return 0;
}
