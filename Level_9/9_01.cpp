#include <iostream>
using namespace std;

int main901() {
	int arr[8] = { 4,3,6,1,3,1,5,3 };
	int cnt = 0;
	int n;
	cin >> n;

	for (int i = 0; i < 8; i++)
	{
		if (arr[i] == n)
		{
			cnt++;
		}
	}
	cout << "숫자" << n << "개수는" << cnt << "개";

	return 0;
}