#include <iostream>
using namespace std;

int main1501() {
	char arr[7];
	char arr2[7];

	cin >> arr >> arr2;

	int len1 = 0, len2 = 0;
	while (arr[len1] !='\0')
	{
		len1++;
	}
	while (arr2[len2] !='\0')
	{
		len2++;
	}

	if (len1 == len2)
	{
		for (int i = 0; i < len1; i++)
		{
			if (arr[i] != arr2[i])
			{
				cout << "다름";
				return 0;
			}
		}
	}
	else {
		cout << "다름";
		return 0;
	}

	cout << "같음";

	return 0;
}