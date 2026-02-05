#include <iostream>
using namespace std;

struct Fill
{
	char dir;
	int idx;
};

int main1904() {
	int arr[4][4] = { 0 };

	Fill fill[3];

	cin >> fill[0].dir >> fill[0].idx;
	cin >> fill[1].dir >> fill[1].idx;
	cin >> fill[2].dir >> fill[2].idx;

	for (int i = 0; i < 3; i++)
	{
		if (fill[i].dir == 'G')
		{
			for (int j = 0; j < 4; j++)
			{
				arr[fill[i].idx][j] = 1;
			}
		}
		else if (fill[i].dir == 'S')
		{
			for (int j = 0; j < 4; j++)
			{
				arr[j][fill[i].idx] = 1;
			}
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