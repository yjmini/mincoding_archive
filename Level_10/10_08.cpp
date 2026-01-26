#include <iostream>
using namespace std;

int pingpong(int stone)
{
	int tong = stone;
	return tong + 10;
}

int main1008() {
	int stone;
	cin >> stone;
	int ret = pingpong(stone);

	cout << ret;

	return 0;
}