#include <iostream>
using namespace std;

int main14003() {
	int n;
	cin >> n;

	int y = 1;
	int x = 1;

	while (y <=3)
	{
		while (x<=5)
		{
			cout << n;
			x++;
		}
		cout << endl;
		y++;
		x = 1;
	}

	return 0;
}