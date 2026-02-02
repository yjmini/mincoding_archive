#include <iostream>
using namespace std;

int main1706() {
	int mask1[4][4] = {
		0,0,0,1,
		1,1,0,1,
		1,0,0,1,
		1,1,1,1
	};
	int mask2[4][4] = {
		1,1,1,1,
		1,0,1,1,
		1,0,0,0,
		1,0,0,0
	};

	int result[4][4] = { 0 };

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (mask1[i][j] == 1 || mask2[i][j] == 1)
			{
				result[i][j]++;
			}
			if (result[i][j] == 0)
			{
				cout << "(" << i << "," << j << ")" << endl;
			}
		}
	}


	
	return 0;
}