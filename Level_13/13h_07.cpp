#include <iostream>
#include <string>
using namespace std;

void Find(char arr[][3], int* y1, int* x1, int* y2, int* x2, char* a, char* b)
{
	*a = arr[*y1][*x1];
	*b = arr[*y2][*x2];
}

int main13007() {
	char arr[3][3] = {
		{'D','A','S'},
		{'Q','W','V'},
		{'R','T','Y'}
	};

	int y1, x1, y2, x2;
	cin >> y1 >> x1 >> y2 >> x2;

	char a, b;

	Find(arr, &y1, &x1, &y2, &x2, &a, &b);

	cout << a << " " << b;

	return 0;
}