#include <iostream>
using namespace std;

char letter[6];

void printout(int idx)
{
	if (idx == 5)
	{
		cout << endl;
		return;
	}
	cout << letter[idx];

	printout(idx + 1);

	cout << letter[idx];
}

int main2005() {
	cin >> letter;

	printout(0);

	return 0;
}