#include <iostream>
using namespace std;

int getSum(int* arr)
{
	int startIdx;
	cin >> startIdx;
	int sum = 0;

	for (int i = startIdx; i < startIdx + 5; i++)
	{
		sum += arr[i];
	}

	return sum;
}

int main17001() {
	int arr[11] = { 3,4,1,1,2,6,8,7,8,9,10 };

	cout << getSum(arr);

	return 0;
}