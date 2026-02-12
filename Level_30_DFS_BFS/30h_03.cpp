#include <iostream>
#include <algorithm>
using namespace std;

int arr[6] = { 1,5,4,2,-5,-7 };
int n;

int main() {
	cin >> n;

	sort(arr, arr + 6);

	cout << arr[6 - n];

	return 0;
}