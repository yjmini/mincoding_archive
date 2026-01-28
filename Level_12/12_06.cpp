#include <iostream>
using namespace std;

char arr[9] = "MINQUEST";

int length(char ch) {
	for (int i = 0; i < 9; i++)
	{
		if (arr[i] == ch) {
			return i;
		}
		
	}
	return -1;
}

int main1206() {
	char a, b, c;
	cin >> a >> b >> c;

	int x = length(a);
	int y = length(b);
	int z = length(c);

	cout << a << "=" << x << endl;
	cout << b << "=" << y << endl;
	cout << c << "=" << z << endl;
	
	return 0;
}