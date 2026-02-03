#include <iostream>
using namespace std;

int main18001() {
	char arr[2][3] = { {'G','K','G'}, {} };
	for (int i = 0; i < 3; i++)
	{
		cin >> arr[1][i];
	}

	int bucket[200] = { 0 };

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			bucket[arr[i][j]]++;
			if (bucket[arr[i][j]] >= 3)
			{
				cout << "있음";
				return 0;
			}
		}
	}
	cout << "없음";

	return 0;
}