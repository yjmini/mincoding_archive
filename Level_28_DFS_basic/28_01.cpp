#include <iostream>
#include <vector>
#include <cstring>
#include <string>
using namespace std;



int main()
{
	int mygraph[5][5] = {
		0,0,0,0,1,
		1,0,0,0,0,
		0,1,0,0,0,
		0,1,0,0,0,
		0,0,0,0,0
	};

	vector<string> names = { "Amy", "Bob", "Chloe", "Diane", "Edger" };
	int counting[5] = { 0 };

	for (int x = 0; x < 5; x++)
	{
		for (int y = 0; y < 5; y++)
		{
			if (mygraph[y][x] == 1)
				counting[x]++;
		}
	}

	int maxIdx = 0;
	int maxVal = counting[0];

	for (int i = 0; i < 5; i++)
	{
		if (maxVal < counting[i])
		{
			maxVal = counting[i];
			maxIdx = i;
		}
	}

	cout << names[maxIdx];

	return 0;
}