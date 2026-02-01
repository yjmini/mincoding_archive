#include <iostream>
using namespace std;

int main15005() {
	int a, b, c;
	cin >> a >> b >> c;

	for (int j = 0; j < c; j++)
	{
		for (int i = a; i < a + b; i++)
		{
			cout << i << " ";
		}
		cout << endl;
	}


	return 0;
}