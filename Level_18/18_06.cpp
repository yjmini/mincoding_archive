#include <iostream>
using namespace std;

int main1806() {
	char town[3][3] = {
	{'C', 'D', 'A'},
	{'B', 'M', 'Z'},
	{'Q', 'P', 'O'}
	};

	char black[5];
	cin >> black;

	int cnt = 0;

	for (int k = 0; k < 5; k++)
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (black[k] == town[i][j])
				{
					cnt++;
				}
			}
		}
	}

	cout << cnt << "명";
	
	return 0;
}