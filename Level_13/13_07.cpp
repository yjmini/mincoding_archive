#include <iostream>
using namespace std;

char vect[3][3] = {
	{'A','D','F'},
	{'Q','W','E'},
	{'Z','X','C'},
};

void find(char* ch, int* y, int* x) {
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (vect[i][j] == *ch) {
				*y = i;
				*x = j;
			}
		}
	}
}

int main1307() {
	char ch;
	cin >> ch;
	int y, x;


	find(&ch, &y, &x);
	cout << y << "," << x;

	return 0;
}