#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
using namespace std;



int main() {
	string str1;
	string str2;

	cin >> str1;
	cin >> str2;

	int maxLen = 0;
	string result = "";

	for (int i = 0; i < str1.size(); i++)
	{
		for (int j = 0; j < str2.size(); j++)
		{
			int len = 0;

			while (i + len <= str1.size() && j + len <= str2.size() && str1[i + len] == str2[j + len])
			{
				len++;
			}
			if (len > maxLen)
			{
				maxLen = len;
				result = str1.substr(i, len);
			}
		}
	}

	cout << result;

	return 0;
}