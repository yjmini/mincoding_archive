#include <iostream>
using namespace std;

int main1702() {
	int arr[8] = { 5,9,4,6,1,5,8,9 };
	int a, b;
	cin >> a >> b;

	int idx;

	for (int i = a; i < 8; i++)
	{
		if (arr[i] == b)
		{
			idx = i;
		}
	}

	cout << idx - a;

	return 0;
}