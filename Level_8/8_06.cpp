#include <iostream>
using namespace std;

int main806() {
	int arr[3][4];

	int n;
	cin >> n;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			arr[i][j] = n+1;
			n++;
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}