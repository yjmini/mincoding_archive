#include <iostream>
using namespace std;

int main1002() {
	int arr[4][4] = { 0 };
	int num = 1;
	int n;
	cin >> n;
	
	if (n % 2 == 0) {
		for (int i = 0; i < 4; i++)
		{
			arr[i][i] = num;
			num++;
		}
	}
	else
	{
		for (int i = 0; i < 4; i++)
		{
			arr[i][3-i] = num;
			num++;
		}
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}