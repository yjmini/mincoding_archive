#include <iostream>
using namespace std;

void Magic(int arr[][3]) {
	int n = 1;
	for (int i = 0; i < 3; i++)
	{
		for (int j = i; j < 3; j++)
		{
			arr[i][j] = n;
			n++;
		}
	}
}

int main14006() {
	int arr[3][3] = { 0 };
	Magic(arr);

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (arr[i][j] == 0)
			{
				cout << " ";
			}
			else {
				cout << arr[i][j];
			}
		}
		cout << endl;
	}


	return 0;
}