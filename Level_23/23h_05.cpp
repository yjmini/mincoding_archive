#include <iostream>
using namespace std;

int arrUnsorted[8];

int a = 1;
int b = 7;

int tempA, tempB;

void _swap(int a, int b)
{
	int temp;
	temp = arrUnsorted[a];
	arrUnsorted[a] = arrUnsorted[b];
	arrUnsorted[b] = temp;
	tempA = 0;
	tempB = 0;
}

int main23005() {
	for (int i = 0; i < 8; i++)
	{
		cin >> arrUnsorted[i];
	}

	int pivot = arrUnsorted[0];

	
	while (b >= a)
	{
		if (arrUnsorted[a] > pivot)
		{
			tempA = arrUnsorted[a];
		}

		if (arrUnsorted[b] < pivot)
		{
			tempB = arrUnsorted[b];
		}

		if (tempA != 0 && tempB != 0)
		{
			_swap(a, b);
		}
		
		if (tempA == 0)
			a++;
		if (tempB == 0)
			b--;

		//for (int i = 0; i < 8; i++)
		//{
		//	cout << arrUnsorted[i] << " ";
		//}

		//cout << "\n";
	}

	_swap(b, 0);


	for (int i = 0; i < 8; i++)
	{
		cout << arrUnsorted[i] << " ";
	}
	return 0;
}