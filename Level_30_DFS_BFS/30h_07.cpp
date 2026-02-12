#include <iostream>
#include <vector>
using namespace std;

int arr[5];
int cnt;

void bt(int lev, int cost)
{
	if (lev == 5)
	{
		if (cost >= 10 && cost <= 20)
		{
			cnt++;
		}
		return;
	}

	bt(lev + 1, cost);
	bt(lev + 1, cost + arr[lev]);

}

int main() {
	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];
	}

	bt(0, 0);

	cout << cnt;

	return 0;
}