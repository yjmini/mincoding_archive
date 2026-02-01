#include <iostream>
using namespace std;

int main1409() {
	int arr[6] = { 10,50,40,20,30,40 };
	int arr2[6];
	for (int i = 0; i < 6; i++)
	{
		cin >> arr2[i];
	}

	for (int i = 0; i < 6; i++)
	{
		int cnt = 0;
		for (int j = 0; j < 6; j++)
		{
			if (arr2[i] < arr[j])
			{
				cnt++;
			}
		}
		cout << arr2[i] << "=" << cnt << "개" << endl;
	}

	return 0;
}