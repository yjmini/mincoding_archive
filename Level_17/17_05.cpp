#include <iostream>
using namespace std;

int arr[3][3] = {
	3,5,9,
	4,2,1,
	5,1,5
};

int isExist(int k)
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (arr[i][j] == k)
			{
				return 1;
			}
		}
	}
	return 0;
}

int main1705() {
	int nums[3];
	for (int i = 0; i < 3; i++)
	{
		cin >> nums[i];
	}

	for (int i = 0; i < 3; i++)
	{
		cout << nums[i] << ":";
		if (isExist(nums[i]) == 1)
		{
			cout << "존재" << endl;
		}
		else if (isExist(nums[i]) == 0)
		{
			cout << "미발견" << endl;
		}
	}



	return 0;
}