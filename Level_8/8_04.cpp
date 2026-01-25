#include <iostream>
using namespace std;

int main804() {
	int arr[6];
	for (int i = 0; i < 6; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < 6; i++)
	{
		cout << arr[5 - i] << " ";
		if (arr[5 - i] == 7) {
			break;
		}
	}

	return 0;
}