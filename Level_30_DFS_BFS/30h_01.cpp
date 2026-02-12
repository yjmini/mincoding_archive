#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int arr[4] = { 12,9,3,6 };
	int deg;
	cin >> deg;

	int rotate = deg / 90 % 4;

	if (rotate == 1)
	{
		cout << arr[1] << " " << arr[3] << " " << arr[0] << " " << arr[2];
	}
	else if (rotate == 3)
	{
		cout << arr[2] << " " << arr[0] << " " << arr[3] << " " << arr[1];
	}
	else if (rotate == 2)
	{
		for (int i = 3; i >= 0; i--)
		{
			cout << arr[i] << " ";
		}
	}
	else
	{
		for (int i = 0; i <4; i--)
		{
			cout << arr[i] << " ";
		}
	}

	return 0;
}



/*
0 ->   12  9  3   6
90 ->  9   6  12  3
180 -> 6   3  9   12
270 -> 3   12 6   9
360 -> 
450 -> 
540 -> 
*/