#include <iostream>
using namespace std;

int main1103() {
	int a;
	char gd;
	cin >> a >> gd;

	int* p = &a;
	char* t = &gd;

	cout << *p << " " << *t;

	return 0;
}