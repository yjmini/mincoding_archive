#include <iostream>
using namespace std;

int train[8] = { 3,7,6,4,2,9,1,7 };
int team[3];

//하나라도 다르면 0, 다 같으면 1
int isExist(int idx)
{
	for (int i = 0; i < 3; i++)
	{
		if (team[i] != train[i + idx])
		{
			return 0;
		}
	}
	return 1;
}

int main18082()
{

	//team 입력
	for (int i = 0; i < 3; i++)
	{
		cin >> team[i];
	}

	//첫 인덱스 활용해서 출력
	for (int i = 0; i < 5; i++)
	{
		if (isExist(i) == 1)
		{
			cout << i << "번~" << i + 2 << "번 칸";
		}
	}

	return 0;
}