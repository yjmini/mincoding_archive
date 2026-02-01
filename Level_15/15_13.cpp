#include <iostream>
using namespace std;

int main1513() {
	char arr[2][6] = { "DATAW", "BBQK" };
	int n;
	cin >> n;

	if (n % 2 == 1)
	{
		for (int i = 0; i < 6; i++)
		{
			for (int j = i+1; j < 6; j++)
			{
				if (arr[0][i] > arr[0][j])
				{
					char temp;
					temp = arr[0][i];
					arr[0][i] = arr[0][j];
					arr[0][j] = temp;
				}
			}
		}
	}
	else
	{
		for (int i = 0; i < 6; i++)
		{
			for (int j = i + 1; j < 6; j++)
			{
				if (arr[1][i] > arr[1][j])
				{
					char temp;
					temp = arr[1][i];
					arr[1][i] = arr[1][j];
					arr[1][j] = temp;
				}
			}
		}
	}

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			if (arr[i][j] != '\0')
			{
				cout << arr[i][j];
			}
		}
		cout << endl;
	}

	return 0;
}