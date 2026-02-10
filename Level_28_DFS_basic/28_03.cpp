#include <iostream>
#include <cstring>
using namespace std;


int main() {
	int arr[8][8] = {
		0,1,1,0,0,0,0,1,
		0,0,0,0,0,0,0,0,
		0,0,0,1,1,0,1,0,
		0,0,0,0,0,1,0,0,
		0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0
	};

	char ch;
	cin >> ch;

	int myParent = -1;


	for (int y = 0; y < 8; y++)
	{
		if (arr[y][ch - 'A'] == 1)
		{
			myParent = y;
			arr[y][ch - 'A'] = 0;
		}
	}

	if (myParent >= 0)
	{
		int cnt = 0;

		for (int x = 0; x < 8; x++)
		{

			if (arr[myParent][x] == 1)
			{
				cnt++;
				cout << (char)(x + 'A') << " ";
			}
		}
		if (cnt == 0)
		{
			cout << "없음";
		}
	}
	else
	{
		cout << "없음";
	}




	return 0;
}
//
//a  b  c  d  e  f  g  h
//65 66 67 68 69 70 71 72 73