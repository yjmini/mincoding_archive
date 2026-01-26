#include <iostream>
using namespace std;

int main995() {
	char arr[2][3];
	int upCnt = 0, lowCnt = 0;
	for (int i = 0; i < 2; i++)
	{
		for (int  j = 0; j < 3; j++)
		{
			cin >> arr[i][j];
			if (arr[i][j] >= 'a' && arr[i][j] <= 'z')
			{
				lowCnt++;
			}else if (arr[i][j] >= 'A' && arr[i][j] <= 'Z')
			{
				upCnt++;
			}
		}
	}

	cout << "대문자" << upCnt << "개" << endl;
	cout << "소문자" << lowCnt << "개" << endl;


	return 0;
}