#include <iostream>
using namespace std;

int main1803() {
	int arr[3][5] = {
		1,3,3,5,1,
		3,6,2,4,2,
		1,9,2,6,5
	};
	int n;
	cin >> n;

	int bucket[10] = { 0 };

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			bucket[arr[i][j]]++;
		}
	}

	for (int i = 0; i < 10; i++)
	{
		if (bucket[i] == n)
		{
			cout << i << " ";
		}
	}

	return 0;
}