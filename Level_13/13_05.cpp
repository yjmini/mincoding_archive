#include <iostream>
using namespace std;

void KFC(int* big, int* small, char* arr) {
	cin >> arr;
	int i = 0;

	while (arr[i] != '\0') {
		if (arr[i] >= 'A' && arr[i] <= 'Z') {
			(*big)++;
		}
		else if(arr[i] >= 'a' && arr[i] <= 'z') {
			(*small)++;
		}
		i++;
	}
	
}

int main1305() {
	char arr[11];
	int big = 0;
	int small = 0;

	KFC(&big, &small, arr);

	cout << "대문자" << big << "개" << endl;
	cout << "소문자" << small << "개" << endl;

	return 0;
}