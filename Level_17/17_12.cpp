#include <iostream>
using namespace std;

int main1712() {
	char arr[5][6] = {
		"ABCDE",
		"FGHIJ",
		"KLMNO",
		"PQRST",
		"UVWXY"
	};

	char ch;
	cin >> ch;

	int y, x;

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (arr[i][j] == ch)
			{
				y = i;
				x = j;
			}
		}
	}
	
	cout << y - 2 << "," << x - 2;

	return 0;
}