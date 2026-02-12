#include <iostream>
#include <vector>
using namespace std;

int n;
vector<char> heros = {'B','I','A','H'};


int main() {
	cin >> n;

	int idx = 0;

	while (!heros.empty())
	{
		//원형 순회 공식: (현재 인덱스 + n - 1) % 남은 사람 수
		idx = (idx + n - 1) % heros.size();

		cout << heros[idx] << " ";

		//시작주소 + idx 만큼 해야 그 위치가 지워짐
		heros.erase(heros.begin() + idx);
	}

	return 0;
}