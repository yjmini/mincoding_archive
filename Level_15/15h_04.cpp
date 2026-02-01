#include <iostream>
using namespace std;

int main15004() {
	int juso[8] = { 402,401,302,301,202,201,102,101 };
	char name[8][5] = { "KIM", "TEA", "SOM", "OPPO", "TOM", "GDK", "JAME", "MIN" };

	int n;
	cin >> n;

	int idx;

	for (int i = 0; i < 8; i++)
	{
		if (juso[i] == n)
		{
			idx = i;
		}
	}

	cout << name[idx];

	return 0;
}