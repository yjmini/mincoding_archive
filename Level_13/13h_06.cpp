#include <iostream>
using namespace std;

int main13006() {
	char arrA[50];
	char arrB[50];

	cin >> arrA >> arrB;

	int i = 0;
	int cntA = 0, cntB = 0, cntC = 0;

	while (arrA[i] != '\0')
	{
		if (arrA[i] == 'A') {
			cntA++;
		}
		else if (arrA[i] == 'B') {
			cntB++;
		}
		else if (arrA[i] == 'C') {
			cntC++;
		}
		i++;
	}
	i = 0;

	while (arrB[i] != '\0')
	{
		if (arrB[i] == 'A') {
			cntA++;
		}
		else if (arrB[i] == 'B') {
			cntB++;
		}
		else if (arrB[i] == 'C') {
			cntC++;
		}
		i++;
	}

	cout << "A:" << cntA << endl;
	cout << "B:" << cntB << endl;
	cout << "C:" << cntC << endl;

	return 0;
}