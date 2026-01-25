#include <iostream>
using namespace std;

int main773() {
	char a, b; 
	cin >> a >> b;

	if ((a >= 'A' && a <= 'Z') && (b >= 'A' && b <= 'Z')) {
		cout << "대문자들" << endl;
	}
	else if ((a >= 'A' && a <= 'Z') || (b >= 'A' && b <= 'Z')) {
		cout << "대소문자" << endl;
	}
	else {
		for (int i = 'a'; i <= 'z'; i++) {
			cout << (char)i;
		}
	}

	return 0;
}