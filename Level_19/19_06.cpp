#include <iostream>
using namespace std;

struct Train {
	int win;
	char name[8];
};

Train train[7] = {
	{15, "summer"},
	{33, "cloe"},
	{24, "summer"},
	{28, "niki"},
	{32, "jenny"},
	{20, "summer"},
	{40, "coco"}
};

int isSame(char name[8], char searchName[8])
{
	int len1, len2;
	for (int i = 0; i < 8; i++)
	{
		if (name[i] == '\0')
		{
			len1 = i;
			break;
		}
	}
	for (int i = 0; i < 8; i++)
	{
		if (searchName[i] == '\0')
		{
			len2 = i;
			break;
		}
	}
	if (len1 == len2)
	{
		for (int i = 0; i < len1; i++)
		{
			if (name[i] != searchName[i])
			{
				return 0;
			}
		}
		return 1;
	}
	else
	{
		return 0;
	}
}

int main1906() {
	char searchName[8];
	cin >> searchName;

	int searchAge;
	cin >> searchAge;

	for (int i = 0; i < 7; i++)
	{
		if (train[i].win == searchAge)
		{
			if (isSame(train[i].name, searchName) == 1)
				cout << i;
		}
	}
	
	return 0;
}