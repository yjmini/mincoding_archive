#include <iostream>
using namespace std;

int main17005() {
	int bit[7];
	int vect[7] = { 3,5,4,2,6,6,5 };
	for (int i = 0; i < 7; i++)
	{
		cin >> bit[i];
	}

	for (int i = 0; i < 7; i++)
	{
		if (bit[i] == 1)
		{
			bit[i] = 7;
		}
		cout << bit[i];
	}

	return 0;
}