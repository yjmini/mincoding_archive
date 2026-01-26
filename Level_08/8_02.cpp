#include <iostream>
using namespace std;

int main802() {
	int arr[6];
	for (int i = 0; i < 6; i++)
	{
		cin >> arr[i];
		if (arr[i] != 7) {
			cout << arr[i] << " ";
		}
		else {
			break;
		}
	}

	return 0;
}
