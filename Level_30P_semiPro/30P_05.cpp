#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct Data
{
	int val;
	int y;
	int x;
};

bool compare(Data a, Data b)
{
	if (a.val != b.val)return a.val > b.val; // 내림차순
	if (a.y != b.y)return a.y < b.y; // 오름차순
	return a.x < b.x;
}

int main() {
	int h, w;
	cin >> h >> w;

	vector<Data> arr;

	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			int temp;
			cin >> temp;
			arr.push_back({ temp, i, j });
		}
	}

	sort(arr.begin(), arr.end(), compare);

	for (int i = 0; i < 3; i++)
	{
		cout << arr[i].val << "(" << arr[i].y << "," << arr[i].x << ")" << '\n';
	}


	return 0;
}