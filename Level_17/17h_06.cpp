#include <iostream>
using namespace std;

int isSame(int pw[4], int input[4])
{
	for (int i = 0; i < 4; i++)
	{
		if (pw[i] != input[i])
		{
			return 0;
		}
	}
	return 1;
}

int main17006() {
	int pw[4] = { 3,7,4,9 };
	int input[4];
	for (int i = 0; i < 4; i++)
	{
		cin >> input[i];
	}

	if (isSame(pw, input) == 1)
	{
		cout << "pass";
	}
	else
	{
		cout << "fail";
	}

	return 0;
}