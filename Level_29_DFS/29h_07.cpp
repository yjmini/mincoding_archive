#include <iostream>
#include <vector>
using namespace std;

int arr[5] = { 0 };

void printResult()
{
	for (int i = 0; i < 5; i++)
	{
		if (arr[i] == 0)
		{
			cout << "_";
		}
		else
		{
			cout << arr[i];
		}
	}
}

void process(int idx)
{
	arr[idx + 1] = arr[idx] - 1;
	arr[idx] = 0;

}

int main() {
	int idx, life;
	cin >> idx >> life;

	arr[idx] = life;

	while (idx <= 4)
	{
		printResult();
		cout << '\n';
		process(idx);
		idx++;
	}
	
	return 0;
}