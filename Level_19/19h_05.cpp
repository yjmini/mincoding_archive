#include <iostream>
using namespace std;

struct sketchbook
{
	char img[3][4];
};

int dat[150];

int main19005() {
	sketchbook s;
	
	for (int i = 0; i < 3; i++)
	{
		cin >> s.img[i];
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			dat[s.img[i][j]]++;
		}
	}

	for (int i = 0; i < 150; i++)
	{
		if (dat[i] > 0)
		{
			cout << (char)i;
		}
	}

	return 0;
}