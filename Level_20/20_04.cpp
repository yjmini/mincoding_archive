#include <iostream>
using namespace std;

int cnt = 0;

void abc(int n)
{
	cnt++;
	if (cnt == 4)
	{
		cout << n << " ";
		return;
	}
		
	abc(n + 2);
	cout << n << " ";
}

int main2004() {
	int n;
	cin >> n;

	abc(n);

	return 0;
}
