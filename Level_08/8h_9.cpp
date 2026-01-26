#include <iostream>
using namespace std;

int main889() {
	char arr[3][6];
	char a, b;
	cin >> a >> b;

	for (int i = 0; i < 3; i++)
	{
			for (int j = 0; j < 6; j++)
			{
				if (j < 4) {
					arr[i][j] = a;
				}
				else
				{
					arr[i][j] = b;
				}

				cout << arr[i][j];
			}
		cout << endl;
	}


	return 0;
}