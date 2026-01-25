#include <iostream>
using namespace std;

int main885() {
	char a, b;
	int n;
	cin >> a >> b;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (char i = a; i <= b; i++) {
			cout << i;
		}
		cout << endl;
	}


	return 0;
}