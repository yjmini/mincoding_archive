#include <iostream>
using namespace std;

int evid[7] = { -1,0,0,1,2,4,4 };
int timeStamp[7] = { 8,3,5,6,8,9,10 };

void dfs(int idx)
{
	if (evid[idx] == -1)
	{
		cout << idx << "번index(출발)" << '\n';
		return;
	}
	dfs(evid[idx]);
	cout << idx << "번index(" << timeStamp[idx] << "시)" << '\n';
}

int main() {
	int idx;
	cin >> idx;

	dfs(idx);

	return 0;
}