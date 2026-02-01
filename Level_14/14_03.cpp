#include <iostream>
using namespace std;

struct FileDown
{
	int x;
	int y;
};

int main1403() {
	FileDown dn;

	cin >> dn.x >> dn.y;

	int cnt = 0;

	while (true)
	{
		if (dn.x != 100) {
			dn.x++;
		}
		if (dn.y != 100) {
			dn.y++;
		}
		cnt++;
		if (dn.x == 100 && dn.y == 100) {
			break;
		}
		
	}

	cout << cnt;

	return 0;
}