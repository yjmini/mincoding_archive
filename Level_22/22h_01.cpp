#include <iostream>
using namespace std;



int main22001() {
	char arr[2][2][4] = { {"ATB", "CCB"}, {"AAA","BBC"} };

	char ch;
	cin >> ch;

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			for (int k = 0; k < 3; k++)
			{
				if (arr[i][j][k] == ch)
				{
					cout << "발견";
					return 0;
				}
			}
		}
	}

	cout << "미발견";

	return 0;
}