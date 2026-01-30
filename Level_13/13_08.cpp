#include <iostream>
using namespace std;

void compareGo(int* arr,int* arr2) {
	for (int i = 0; i < 5; i++)
	{
		if (arr[i] != arr2[i])
		{
			cout << "두배열은같지않음";
			return;
		}
	}
	cout << "두배열은완전같음";
	return;
}

int main1308() {
	int arr[5] = { 3,5,1,2,7 };
	int arr2[5];

	for (int i = 0; i < 5; i++)
	{
		cin >> arr2[i];
	}

	compareGo(arr, arr2);

	return 0;
}