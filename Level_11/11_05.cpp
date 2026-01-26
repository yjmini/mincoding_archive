#include <iostream>
using namespace std;


int main1105() {
	int a, b;
	cin >> a >> b;
	int *p = &a;
	int *t = &b;

	int temp;
	temp = *p;
	*p = *t;
	*t = temp;

	cout << *p << " " << *t;

	return 0;
}