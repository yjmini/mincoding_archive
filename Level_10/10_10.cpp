#include <iostream>
using namespace std;


int main1010() {
	int arr[3][4];
	int n;
	cin >> n;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			arr[i][j] = 12 - 4 * i - j;
			if (j == n)
			{
				arr[i][j] = 0;
			}
			cout << arr[i][j] <<" ";
		}
		cout << endl;
	}

	return 0;
}