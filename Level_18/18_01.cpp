#include <iostream>
using namespace std;

int main1801() {
    int MAP[3][4] = {
    {65000, 35, 42, 70},
    {70, 35, 65000, 1300},
    {65000, 30000, 38, 42}
    };

    int bucket[70000] = { 0 };

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            bucket[MAP[i][j]]++;
        }
    }

    int maxVal = bucket[0];
    int maxIdx = 0;

    for (int i = 0; i < 70000; i++)
    {
        if (maxVal < bucket[i])
        {
            maxVal = bucket[i];
            maxIdx = i;
        }
    }

    cout << maxIdx;

	return 0;
}