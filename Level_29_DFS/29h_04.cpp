#include <iostream>
using namespace std;

int arr1[4];
int arr2[4];
int result[8];
int resIdx;

void mysort(int idx1, int idx2)
{
	if (idx1 == 4 && idx2 == 4)
	{
		return;
	}

	if (idx1 == 4)
	{
		for (idx2 = idx2; idx2 < 4; idx2++)
		{
			result[resIdx] = arr2[idx2];
			resIdx++;
		}
	}
	else if (idx2 == 4)
	{
		for (idx1 = idx1; idx1 < 4; idx1++)
		{
			result[resIdx] = arr1[idx1];
			resIdx++;
		}
	}

	else if (arr1[idx1] >= arr2[idx2])
	{
		result[resIdx] = arr2[idx2];
		idx2++;
	}
	else
	{
		result[resIdx] = arr1[idx1];
		idx1++;
	}
	resIdx++;
	mysort(idx1, idx2);

}

int main() {
	for (int i = 0; i < 4; i++)
	{
		cin >> arr1[i];
	}
	for (int i = 0; i < 4; i++)
	{
		cin >> arr2[i];
	}

	mysort(0,0);

	for (int i = 0; i < 8; i++)
	{
		cout << result[i] << " ";
	}

	return 0;
}