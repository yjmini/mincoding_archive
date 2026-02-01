#include <iostream>
using namespace std;

int main() {
	char arr1[10];
	char arr2[10];
	char arr3[10];

	cin >> arr1 >> arr2 >> arr3;

	int i = 0;

	while (arr1[i] == arr2[i])
	{
		if (arr2[i] != arr3[i])
		{
			cout << "NO";
			return 0;
		}
		i++;
	}

	cout << "YES";

	return 0;
}