#include <iostream>
using namespace std;

int main1506() {
	char arr[11];

	cin >> arr;

	int len = 0;

	while (arr[len] !='\0')
	{
		len++;
	}

	int flag = 0;

	for (int i = 0; i < len; i++)
	{
		if (i % 2 == 0) 
		{
			if (arr[i] >= 'A' && arr[i] <= 'Z')
			{
				flag = 1;
			}
			else
			{
				flag = 0;
				break;
			}
		}
		else 
		{
			if (arr[i] >= 'a' && arr[i] <= 'z')
			{
				flag = 1;
			}
			else
			{
				flag = 0;
				break;
			}
		}
	}

	if (flag == 0)
	{
		cout << "일반문장";
	}
	else if (flag == 1)
	{
		cout << "개구리문장";
	}

	return 0;
}