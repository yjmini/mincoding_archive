#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;


int main22006() {
	char str[4][11];
	for (int i = 0; i < 4; i++)
	{
		cin >> str[i];
	}

    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 4; j++) {
            if (strlen(str[i]) > strlen(str[j])) {
                char temp[11];
                strcpy(temp, str[i]); 
                strcpy(str[i], str[j]); 
                strcpy(str[j], temp); 
            }
        }
    }

    for (int i = 0; i < 4; i++)
    {
        cout << str[i] << endl;
    }

	return 0;
}