#include <iostream>
using namespace std;

struct MC
{
	char burger1[9];
	char burger2[9];
};

int len(char burger[9])
{
	for (int i = 0; i < 9; i++)
	{
		if (burger[i] == '\0')
		{
			return i;
		}
	}
}

int main1905() {
	MC bob;
	MC tom;
	cin >> bob.burger1 >> bob.burger2;
	cin >> tom.burger1 >> tom.burger2;

	
	cout << "bob.burger1=" << len(bob.burger1) << endl;
	cout << "bob.burger2=" << len(bob.burger2) << endl;
	cout << "tom.burger1=" << len(tom.burger1) << endl;
	cout << "tom.burger2=" << len(tom.burger2) << endl;

	return 0;
}