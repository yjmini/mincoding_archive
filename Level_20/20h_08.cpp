#include <iostream>
using namespace std;

int main20008() {
	int arr1[4];
	int arr2[4];
	for (int i = 0; i < 4; i++)
	{
		cin >> arr1[i];
	}

	for (int i = 0; i < 4; i++)
	{
		cin >> arr2[i];
	}

	int result[8] = { 0 };

	int idx1 = 0;
	int idx2 = 0;

	for (int i = 0; i < 8; i++)
	{

		if (idx1 == 4 && idx2 != 4)
		{
			result[i] = arr2[idx2];
			idx2++;
		}
		if (idx2 == 4 && idx1 != 4)
		{
			result[i] = arr1[idx1];
			idx1++;
		}


		if (idx1 !=4 && idx2 !=4 && arr1[idx1] <= arr2[idx2])
		{
			result[i] = arr1[idx1];
			idx1++;
		}
		else if (idx1 != 4 && idx2 != 4 && arr1[idx1] > arr2[idx2])
		{
			result[i] = arr2[idx2];
			idx2++;
		}

	}

	for (int i = 0; i < 8; i++)
	{
		cout << result[i] << " ";
	}

	return 0;
}