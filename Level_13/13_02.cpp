#include <iostream>
using namespace std;

void moom(int age, int* arr) {
	arr[0] = age - 4;
	arr[1] = age + 3;
	arr[2] = age * 2;
}

int main1302() {
	int age;
	cin >> age;
	int arr[3];

	moom(age, arr);

	for (int i = 0; i < 3; i++)
	{
		cout << arr[i] << " ";
	}



	return 0;
}
