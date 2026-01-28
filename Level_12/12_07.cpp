#include <iostream>
using namespace std;

int main1207() {
	char str[11];
	cin >> str;

	int len;
	for (int i = 0; i < 11; i++)
	{
		if (str[i] == '\0') {
			len = i;
			break;
		}
	}

	char input[3];
	for (int i = 0; i < 3; i++)
	{
		cin >> input[i];
	}

	for (int i = 0; i < 3; i++)
	{
		int cnt = 0;
		for (int j = 0; j < len; j++)
		{
			
			if (input[i] == str[j]) {
				cnt++;
			}
		}
		cout << (char)input[i] << "=" << cnt << endl;

	}

	return 0;
}