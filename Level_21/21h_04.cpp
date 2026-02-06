#include <iostream>
using namespace std;


int main21004() {
	char bf[4][3];
	char af[4][3];

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> bf[i][j];
		}
	}

	for (int i = 3; i >= 0; i--)
	{
		for (int j = 2; j >= 0; j--)
		{
			if (bf[i][j] != '_')
			{
				for (int k = 3; k >= 0; k--)
				{
					if (bf[k][j] == '_')
					{
						bf[k][j] = bf[i][j];
						bf[i][j] = '_';
					}
				}
			}
		}
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << bf[i][j];
		}
		cout << endl;
	}


	return 0;
}