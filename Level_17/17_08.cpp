#include <iostream>
using namespace std;

int main1708() {
	char vect[7] = { "BTKIGZ" };
	char target[4];

	for (int i = 0; i < 4; i++)
	{
		cin >> target[i];
	}

	int cnt = 0;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			if (target[i] == vect[j])
			{
				cnt++;
				break;
			}
		}
	}

	cout << cnt;

	return 0;
}