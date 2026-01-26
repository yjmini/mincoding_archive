#include <iostream>
using namespace std;


int main881() {
	int arr[6];

	for (int i = 0; i < 6; i++)
	{
		cin >> arr[i];
		cout << i << "번은 " << arr[i] << "점 ";
		if (arr[i] >= 5) {
			cout << "합격" << endl;
		}
		else {
			cout << "불합격" << endl;
		}
	}

	return 0;
}