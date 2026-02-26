#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<int> arr(n);

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	int minVal = 21e8;
	int tempSum = 0;

	for (int i = 0; i < 4; i++)
	{
		tempSum += arr[i];
	}

	minVal = tempSum;


	for (int i = 4; i < n; i++)
	{
		tempSum = tempSum + arr[i] - arr[i - 4];
		minVal = min(minVal, tempSum);
	}

	cout << minVal << '\n';

	return 0;
}