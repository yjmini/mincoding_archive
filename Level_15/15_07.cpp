#include <iostream>
using namespace std;

int main1507() {
	char arr[7] = { 'A','B','C','Z','E','T','Q' };
	char black[6];

	cin >> black;

	for (int i = 0; i < 5; i++)
	{
		int flag = 0;
		for (int j = 0; j < 7; j++)
		{
			if (arr[j] == black[i])
			{
				flag = 1;
				break;
			}
		}

		if (flag == 1)
		{
			cout << black[i] << "=" << "마을사람" << endl;
		}
		else if (flag == 0)
		{
			cout << black[i] << "=" << "외부사람" << endl;
		}
	}



	return 0;
}