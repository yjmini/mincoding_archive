#include <iostream>
using namespace std;

int main1907() {
	int input[4][2];
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cin >> input[i][j];
		}
	}

	int vect[4][3] = { 0 };

	for (int i = 0; i < 4; i++)
	{
		vect[input[i][0]][input[i][1]] = 5;
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << vect[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}