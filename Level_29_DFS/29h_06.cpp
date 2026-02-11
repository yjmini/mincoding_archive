#include <iostream>
using namespace std;

int arr[3][4] = {
	3,2,5,3,
	7,6,1,6,
	4,9,2,7
};

void rotation(int idx, int cnt)
{
	for (int i = 0; i < cnt; i++)
	{
		int temp = arr[2][idx];
		arr[2][idx] = arr[1][idx];
		arr[1][idx] = arr[0][idx];
		arr[0][idx] = temp;
	}
}

int main() {

	int rotate[4];
	for (int i = 0; i < 4; i++)
	{
		cin >> rotate[i];
	}

	for (int i = 0; i < 4; i++)
	{
		rotation(i, rotate[i]);
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << arr[i][j];
		}
		cout << '\n';
	}
	
	return 0;
}