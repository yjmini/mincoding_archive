#include <iostream>
using namespace std;


int main10010() {
	int arr[7][5] = { {1,0,0,0,0}, {1,0,1,0,0}, {1,1,0,1,0},{1,0,1,0,0},{0,1,0,0,1},{0,0,0,1,0},{1,1,0,0,0} };
	int n;
	cin >> n;
	int cnt = 0;

	for (int i = 0; i < 7; i++)
	{
		if (arr[i][n] == 1) {
			cnt++;
		}
	}
	cout << cnt;


	return 0;
}