#include <iostream>
using namespace std;

int main1808() {
	int train[8] = { 3, 7, 6, 4, 2, 9, 1, 7 };
	int team[3];

	// team 채우기
	for (int i = 0; i < 3; i++)
	{
		cin >> team[i];
	}

	int result[3] = { 0 };

	// team 길이만큼 모두 같은지 비교
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (team[j] == train[i+j])
			{
				result[j] = i + j;
			}
		}
	}

	int flag = 0;

	// result가 0이 아니면 flag 세움(이유: 전부다 0이 아니면 연속을 찾은거니까)
	for (int i = 0; i < 3; i++)
	{
		if (result[i] != 0)
		{
			flag = 1;
		}
		else {
			flag = 0;
			break;
		}
	}

	// 제대로 찾은 게 맞으면 인덱스 범위 출력
	if (flag == 1)
	{
		cout << result[0] << "번~" << result[2] << "번 칸";
	}

	return 0;
}