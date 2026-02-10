#include <iostream>
#include <vector>
using namespace std;



int main() 
{
	int n;
	cin >> n;

	vector<vector<int>> map(n, vector<int>(n));

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> map[i][j];
		}
	}

	vector<int> boss(n);
	vector<int> under(n);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (map[0][j] == 1)
				under[j] = 1;
			if (map[j][0] == 1)
				boss[j] = 1;
		}
	}

	cout << "boss:";
	for (int i = 0; i < n; i++)
	{
		if (boss[i] == 1)
		{
			cout << i << " ";
		}
	}
	cout << '\n';
	cout << "under:";
	for (int i = 0; i < n; i++)
	{
		if (under[i] == 1)
		{
			cout << i << " ";
		}
	}

	return 0;
}