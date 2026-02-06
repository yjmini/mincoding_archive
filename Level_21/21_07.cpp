#include <iostream>
#include <cstring>
using namespace std;

void lenprint(int len)
{
	cout << len << " ";
	if (len == 1)
	{
		return;
	}
	

	lenprint(len - 1);
	cout << len << " ";

}

int main2107() {
	char arr[30];
	cin >> arr;

	int len = strlen(arr);

	lenprint(len);

	return 0;
}