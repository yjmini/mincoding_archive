#include <iostream>
using namespace std;

int main15011() {
	char arr[7] = "APPLET";
	char ans[5];
	for (int i = 0; i < 5; i++)
	{
		cin >> ans[i];
	}

	int cnt = 0;

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			if (arr[j] == ans[i])
			{
				cnt++;
			}
		}
	}

	cout << cnt << "개 맞추었습니다";

	return 0;
}