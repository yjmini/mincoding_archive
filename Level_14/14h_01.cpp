#include <iostream>
using namespace std;

int main14001() {
	char a, b;
	cin >> a >> b;

	char* p1 = &a;
	char* p2 = &b;

	char temp;
	temp = *p1;
	*p1 = *p2; 
	*p2 = temp;

	cout << a << " " << b;

	return 0;
}