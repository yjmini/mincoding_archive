#include <iostream>
using namespace std;

int main12006() {
	char vect[100] = { 0 };
	cin >> vect;

	int len = 0;
	int cnt = 0;
	for (int i = 0; i < 100; i++)
	{
		if (vect[i] == 0) {
			
			break;
		}
		else {
			len++;
		}
	}
	cout << len << endl;
	
	for (int i = 0; i < len; i++)
	{
		if (vect[len - 1] == vect[i]) {
			cnt++;
		}
	}
	cout << cnt << endl;

	return 0;
}