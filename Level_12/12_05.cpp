#include <iostream>
using namespace std;

int arr[3][4];

int main1205() {
	int n;
	cin >> n;


	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if ((i == 0 && j <2)|| (i==1 && j <1)) {
				continue;
			}
			arr[i][j] = n;
			n++;
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (arr[i][j] == 0) {
				cout << " ";
			}
			else {
				cout << arr[i][j];
			}

		}
		cout << endl;
	}

	return 0;
}