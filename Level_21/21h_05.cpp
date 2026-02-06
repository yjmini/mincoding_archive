#include <iostream>
using namespace std;

int main21005() {
	int vect[8];
	for (int  i = 0; i < 8; i++)
	{
		cin >> vect[i];
	}

	int bucket[10] = { 0 };

	for (int i = 0; i < 8; i++)
	{
		bucket[vect[i]]++;
	}

	for (int i = 0; i < 10; i++)
	{
		if (bucket[i] > 0)
		{
			for (int j = bucket[i]; j >= 1; j--)
			{
				cout << i << " ";
			}
		}
	}

	return 0;
}