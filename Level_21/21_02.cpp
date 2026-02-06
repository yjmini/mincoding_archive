#include <iostream>
#include <cstring>
using namespace std;



int main2102() {
	char id[30];
	cin >> id;
	char pw[30];
	cin >> pw;

	if (strcmp(id, "qlqlaqkq") == 0 && strcmp(pw, "tkaruqtkf") == 0)
	{
		cout << "LOGIN";
	}
	else
	{
		cout << "INVALID";
	}

	return 0;
}