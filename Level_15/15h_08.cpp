#include <iostream>
using namespace std;

int main15008() {
	char a, b, c;
	cin >> a >> b >> c;

	char* p1 = &a;
	char* p2 = &b;
	char* p3 = &c;

	if (*p1 >= *p2)
	{
		if (*p1 >= *p3)
		{
			cout << *p1;
		}
		else 
		{
			cout << *p3;
		}
	}
	else
	{
		if (*p2 >= *p3)
		{
			cout << *p2;
		}
		else
		{
			cout << *p3;
		}
	}

	return 0;
}