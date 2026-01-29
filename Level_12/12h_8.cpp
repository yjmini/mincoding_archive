#include <iostream>
using namespace std;

int main12008() {
	int arr[3][3] = { 0 };
	int a;
	cin >> a;
	
	for (int i = 0; i < 3; i++)
	{
		for (int j = 2-i; j < 3; j++)
		{
			arr[i][j] = a;
			a++;
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr[i][j];
		}
		cout << endl;
	}

	return 0;
}