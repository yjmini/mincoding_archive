#include <iostream>
using namespace std;

int main1807() {
	char alphabet[5][3] = {
	{'A', 'B', 'C'},
	{'A', 'G', 'H'},
	{'H', 'I', 'J'},
	{'K', 'A', 'B'},
	{'A', 'B', 'C'}
	};

	int bucket[100] = { 0 };

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			bucket[alphabet[i][j]]++;
		}
	}

	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < bucket[i]; j++)
		{
			cout << (char)i;
		}
	}

	return 0;
}