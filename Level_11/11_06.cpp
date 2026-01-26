#include <iostream>
using namespace std;

int main1106() {
	int arr[7] = { 3, 4, 1, 3, 2, 7, 3 };
	int n;
	cin >> n;

	for (int i = 0; i < 7; i++)
	{
		if (arr[i] == n) {
			cout << "발견";
			return 0;
		}
	}
	cout << "미발견";
	
	return 0;
}