#include <iostream>
using namespace std;

int main13005() {
	char arr[2][6] = {
		{4,5,7,1,3,2},
		{'D','F','Q','W','G','Z'}
	};
	
	int n;
	cin >> n;

	for (int i = 0; i < 6; i++)
	{
		if (arr[0][i] == n)
		{
			cout << arr[1][i];
			break;
		}
	}

	return 0;
}