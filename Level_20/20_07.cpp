#include <iostream>
using namespace std;

int nums[8] = { 3,7,4,1,9,4,6,2 };

void printArr(int idx)
{
	cout << nums[idx] << " ";

	if (idx == 0)
	{
		return;
	}
	printArr(idx - 1);
	cout << nums[idx] << " ";
}

int main2007() {
	int n;
	cin >> n;

	printArr(n);

	return 0;
}