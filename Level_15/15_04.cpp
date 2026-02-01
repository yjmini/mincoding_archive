#include <iostream>
using namespace std;

int main1504() {
	char arr1[11];
	char arr2[11];
	cin >> arr1 >> arr2;

	int len1 = 0, len2 = 0;

	while (arr1[len1] !='\0')
	{
		len1++;
	}
	while (arr2[len2] !='\0')
	{
		len2++;
	}

	int flag = 0;

	if (len1==len2)
	{
		for (int i = 0; i < len1; i++)
		{
			if (arr1[i] != arr2[len1 - 1 - i])
			{
				flag = 1;
			}
		}
	}

	if (flag == 1)
	{
		cout << "거울문장아님";
	}
	else if (flag == 0)
	{
		cout << "거울문장";
	}


	return 0;
}