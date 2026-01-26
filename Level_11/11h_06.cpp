#include <iostream>
using namespace std;

int main11106() {
	char arr[3][3] = { {'a','b','E'}, {'E','2','W'}, {'3','2','4'} };
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (arr[i][j] >= 'a' && arr[i][j] <= 'z') {
				arr[i][j] = arr[i][j] - 'a' + 'A';
			} else if (arr[i][j] >= 'A' && arr[i][j] <= 'Z') {
				arr[i][j] = arr[i][j] - 'A' + 'a';
			} else if (arr[i][j] >= '0' && arr[i][j] <= '9') {
				arr[i][j] = arr[i][j] + 5;
			}
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	
	return 0;
}