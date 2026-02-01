#include <iostream>
using namespace std;

int main1516() {
	char arr[3][3] = { '\0' };
	char ch;
	cin >> ch;

	int y = 2;
	int x = 0;

	while (y>=0)
	{
		x = 0;
		while (x <= 2-y)
		{
			arr[y][x] = ch;
			x++;
			ch++;
		}
		y--;
	}

	y = 0;
	while (y<3)
	{
		x = 0;
		while (x<3)
		{
			if (arr[y][x] != '\0')
			{
				cout << arr[y][x];
			}
			else
			{
				cout << " ";
			}
			x++;
		}
		y++;
		cout << endl;
	}

	//for (int i = 0; i < 3; i++)
	//{
	//	for (int j = 0; j < 3; j++)
	//	{
	//		if (arr[i][j] != '\0')
	//		{
	//			cout << arr[i][j];
	//		}
	//		else
	//		{
	//			cout << " ";
	//		}

	//	}
	//	cout << endl;
	//}

	return 0;
}