#include <iostream>
using namespace std;

int main1208() {
	char arr[10] = "DATAPOWER";
	int a, b;
	cin >> a >> b;

	char arr2[9] = { '\0' };
	int idx = 0;
	for (int i = a; i <= b; i++)
	{
		arr2[idx] = arr[i];
		idx++;
	}

	for (int i = 0; i < idx; i++)
	{
		cout << arr2[i];
	}

	return 0;
}