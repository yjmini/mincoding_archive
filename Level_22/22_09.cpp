#include <iostream>
#include <cstring>
using namespace std;

int main2209() {
	char pw[5][10] = {
		"Jason",
		"Dr.tom",
		"EXEXI",
		"GK12P",
		"POW"
	};

	char pwinput[10];
	cin >> pwinput;

	for (int i = 0; i < 5; i++)
	{
		if (strcmp(pwinput, pw[i]) == 0)
		{
			cout << "암호해제" << endl;
			return 0;
		}

	}
	cout << "암호틀림" << endl;

	return 0;
}