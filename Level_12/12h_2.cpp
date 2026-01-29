#include <iostream>
using namespace std;

int main12002() {
	int a, b;
	char c, d;
	int* p1 = &a;
	int* p2 = &b;
	char* p3 = &c;
	char* p4 = &d;
	cin >> a >> b;
	cin >> c >> d;

	for (int i = 0; i < *p1; i++)
	{
		cout << *p3;
	}
	cout << endl;
	for (int i = 0; i < *p2; i++)
	{
		cout << *p4;
	}


	return 0;
}