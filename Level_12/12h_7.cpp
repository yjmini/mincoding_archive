#include <iostream>
#include <string>
using namespace std;

int main12007() {
	string str1;
	string str2;
	string str3;

	cin >> str1 >> str2 >> str3;

	if (str1.length() > str2.length() && str1.length() > str3.length()) {
		cout << str1 << endl;
	}else if (str2.length() > str3.length() && str2.length() > str1.length()) {
		cout << str2 << endl;
	}else if (str3.length() > str2.length() && str3.length() > str1.length()) {
		cout << str3 << endl;
	}

	return 0;
}