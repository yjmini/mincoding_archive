#include <iostream>
using namespace std;

struct Mart
{
	int x;
	int y;
	int z;
};

int main14004() {
	Mart A;
	Mart B;
	Mart C;

	A.x = 300;
	A.y = 500;
	A.z = 1000;
	B.x = 450;
	B.y = 450;
	B.z = 900;
	C.x = 200;
	C.y = 150;
	C.z = 700;

	char ch;
	cin >> ch;

	if (ch == 'A')
	{
		cout << (A.x + A.y + A.z) / 3;
	}else if (ch == 'B')
	{
		cout << (B.x + B.y + B.z) / 3;
	}else if(ch == 'C')
	{
		cout << (C.x + C.y + C.z) / 3;
	}

	return 0;
}