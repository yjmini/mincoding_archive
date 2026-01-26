#include <iostream>
using namespace std;

int main10006() {
	int arr[6][3];
	int a, b;
	cin >> a >> b;

	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			arr[i][j] = 10 + i + j * 6;
			if (i >= a && i <= b) {
				arr[i][j] = 7;
			}
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	
	return 0;
}