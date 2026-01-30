#include <iostream>
using namespace std;

int stringLen(char* str) {
	int i = 0;
	while (str[i] != '\0') {
		i++;
	}
	return i;
}

int main1303() {
	char str[100];
	cin >> str;

	cout << stringLen(str) << "글자";

	return 0;
}