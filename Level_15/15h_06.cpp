#include <iostream>
using namespace std;

int main15006() {
	int arr[9] = { 0 };
	int a, b;
	
	for (int i = 0; i < 3; i++)
	{
		cin >> a >> b;
		for (int j = a; j <= b; j++)
		{
			arr[j]++;
		}
	}

	for (int i = 0; i < 9; i++)
	{
		cout << arr[i] << " ";
	}


	return 0;
}