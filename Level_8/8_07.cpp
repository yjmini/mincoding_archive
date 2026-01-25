#include <iostream>
using namespace std;

int main807() {
	char arrA[5] = { 'B', 'D', '5', 'Q', 'A' };
	char arrB[5] = { 'Q', 'E', 'R', 'E', 'F' };

	char n; 
	cin >> n;

	if (n >='a' && n <='z')
	{
		for (int i = 0; i < 5; i++)
		{
			cout << arrA[i];
		}
	}
	else if (n>='A'&&n<='Z')
	{
		for (int i = 0; i < 5; i++)
		{
			cout << arrB[i];
		}
	}
	else if (n >= '0' && n <= '9') 
	{
		for (int i = 'H'; i >= 'A'; i--)
		{
			cout << (char)i;
		}
	}

	return 0;
}