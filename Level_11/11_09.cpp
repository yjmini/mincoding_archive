#include <iostream>
using namespace std;

int main1109() {
	char arr[8];
	for (int i = 0; i < 8; i++)
	{
		cin >> arr[i];
	}

	char big[8] = { 0 };
	char small[8] = { 0 };

	for (int i = 0; i < 8; i++)
	{
		if (arr[i] >= 'A' && arr[i] <= 'Z') {
			big[i] = arr[i];
		}
		else if (arr[i] >= 'a' && arr[i] <= 'z') {
			small[i] = arr[i];
		}
	}

	cout << "big=";
	
	for (int i = 0; i < 8; i++)
	{
		if (big[i] != 0) {
			cout << big[i];
		}
	}

	cout << endl << "small=";

	for (int i = 0; i < 8; i++)
	{
		if (small[i] != 0) {
			cout << small[i];
		}
	}

	return 0;
}