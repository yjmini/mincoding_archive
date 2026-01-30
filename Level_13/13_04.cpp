#include <iostream>
using namespace std;

void ABC(int a, int b, int* SUM, int* GOP) {
	*SUM = a + b;
	*GOP = a * b;
}

int main1304() {
	int a, b;
	cin >> a >> b;

	int SUM, GOP;

	ABC(a, b, &SUM, &GOP);

	cout << SUM << " " << GOP;

	return 0;
}