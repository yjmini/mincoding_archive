#include <iostream>
using namespace std;

int arr[2][6] = { {4, 5, 6, 1, 3, 1},{2, 1, 3, 6, 3, 6} };

void input(int* a, int* b,int* c) {
	cin >> *a >> *b >> *c;
}

void process(int a, int b, int c, int* cntA, int* cntB, int* cntC) {
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			if (arr[i][j] == a)
			{
				(*cntA)++;
			}
			else if (arr[i][j] == b)
			{
				(*cntB)++;
			}
			else if (arr[i][j] == c)
			{
				(*cntC)++;
			}
		}
	}
}

void output(int a, int b, int c, int cntA, int cntB, int cntC) {
	cout << a << "=" << cntA << "개" << endl;
	cout << b << "=" << cntB << "개" << endl;
	cout << c << "=" << cntC << "개" << endl;
}

int main1306() {
	int a, b, c;
	int cntA = 0, cntB = 0, cntC = 0;

	input(&a, &b, &c);
	process(a, b, c, &cntA, &cntB, &cntC);
	output(a, b, c, cntA, cntB, cntC);

	return 0;
}