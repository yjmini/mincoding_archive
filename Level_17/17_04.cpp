#include <iostream>
using namespace std;

int main1704() {
	char arr[3][5] = {
		"ATKB",
		"CZFD",
		"HGEI"
	};

	char ch;
	cin >> ch;

	int y, x;
	cin >> y >> x;

	int cy, cx;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (arr[i][j] == ch)
			{
				cy = i;
				cx = j;
			}
		}
	}

	cout << arr[cy + y][cx + x];

	return 0;
}
