#include <iostream>
#include <string>
using namespace std;

int main2401()
{
	string str;
	cin >> str;

	cout << str << endl;
	
	for (int i = str.size()-1; i >= 0; i--)
	{
		cout << str[i];
	}

	return 0;
}