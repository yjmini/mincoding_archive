#include <iostream>
using namespace std;

int main1108() {
	char arr[14] = { "StructPointer" };
	char ch;
	cin >> ch;

	for (int i = 0; i < 14; i++)
	{
		if (arr[i] == ch)
		{
			cout << "발견";
			return 0;
		}
	}
	cout << "미발견";

	return 0;
}