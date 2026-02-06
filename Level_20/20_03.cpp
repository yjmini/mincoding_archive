#include <iostream>
using namespace std;

int arr[6];

void movement(int idx)
{
	cout << arr[idx] << " ";
	
	if (idx == 5)
		return;

	movement(idx + 1);
	cout << arr[idx] << " ";
}

int main2003() {
	for (int i = 0; i < 6; i++)
	{
		cin >> arr[i];
	}
	movement(0);

	return 0;
}