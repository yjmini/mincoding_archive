#include <iostream>
using namespace std;

void minmax(int* a, int* b)
{
	int arr[5];
	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];
	}
	int maxVal = -21e8;
	int minVal = 21e8;

	for (int i = 0; i < 5; i++)
	{
		if (maxVal < arr[i])
		{
			maxVal = arr[i];
		}
		if (minVal > arr[i])
		{
			minVal = arr[i];
		}
	}
	*a = maxVal;
	*b = minVal;
}

int main19001() {

	int a, b;
	minmax(&a, &b);

	cout << "a=" << a << endl << "b=" << b;
	return 0;
}