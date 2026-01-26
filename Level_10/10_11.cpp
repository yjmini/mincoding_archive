#include <iostream>
using namespace std;


int main1011() {
	int arr[4][4];
	
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cin >> arr[i][j];
			if (arr[i][j] == 0) {
				arr[i][j] = '!';
			}
			else if (arr[i][j]%2 ==0)
			{
				arr[i][j] = '#';
			}
			else
			{
				arr[i][j] = '@';
			}
			cout << (char)arr[i][j];
		}
		cout << endl;
	}

	return 0;
}