#include <iostream>
using namespace std;

char abcd[4][5][4] = {
	{" # ", "# #", "###", "# #", "# #"},
	{"###", "# #", "###", "# #", "###"},
	{"###", "# #", "#  ", "# #", "###"},
	{"## ", "# #", "# #", "# #", "## "},
};


int main22007() {
	int n;
	cin >> n;

	for (int i = 0; i < 5; i++)
	{
		cout << abcd[n][i] << endl;
	}

	return 0;
}