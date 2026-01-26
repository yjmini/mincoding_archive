#include <iostream>
using namespace std;

int main910() {
	char arr[5];
	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];
		if (arr[i] >= 'a' && arr[i] <= 'z') {
			cout << "소";
		}
		else if (arr[i] >= 'A' && arr[i] <= 'Z') {
			cout << "대";
		}
	}

	return 0;
}