#include <iostream>
using namespace std;

int main23004() {
	int arr[3][4] = {
		3,5,4,1,
		1,1,2,3,
		6,7,1,2
	};

	int result[3][4] = { 0 };

	int change[5];
	for (int i = 0; i < 4; i++)
	{
		cin >> change[i];
	}
	change[4] = change[0];

	for (int k = 0; k < 4; k++)
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				if (arr[i][j] == change[k])
				{
					result[i][j] = change[k + 1];
				}
			}
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (result[i][j] == 0)
			{
				result[i][j] = arr[i][j];
			}
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << result[i][j] << " ";
		}
		cout << endl;
	}
	
	return 0;
}