#include <iostream>
#include <vector>
using namespace std;

int main18007() {
	char vect[10] = { "MINCODING" };
	int n;
	cin >> n;

	vector<char> v(n);

	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}

	int bucket[200] = { 0 };
	for (int i = 0; i < 10; i++)
	{
		bucket[vect[i]]++;
	}

	for (int i = 0; i < n; i++)
	{
		if (bucket[v[i]] > 0)
		{
			cout << "O";
		}
		else
		{
			cout << "X";
		}
	}

	return 0;
}