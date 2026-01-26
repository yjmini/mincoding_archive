#include <iostream>
using namespace std;

int main1009() {
	int arr[4][4];

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			arr[i][j] = 13 + i - 4 * j;
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}