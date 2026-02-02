#include <iostream>
using namespace std;

int main1804() {
	char cardlist[15];
	cin >> cardlist;

	int bucket[150] = { 0 };

	int len;
	for (int i = 0; i < 15; i++)
	{
		if (cardlist[i] == '\0')
		{
			len = i;
			break;
		}
	}

	for (int i = 0; i < len; i++)
	{
		bucket[cardlist[i]]++;
	}

	int cnt = 0;

	for (int i = 0; i < 150; i++)
	{
		if (bucket[i] > 0)
		{
			cnt++;
		}
	}

	cout << cnt << "개";

	return 0;
}