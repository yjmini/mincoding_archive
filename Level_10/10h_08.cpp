#include <iostream>
using namespace std;

char Calculator(int score) {
	if (score >= 90) {
		return 'A';
	}
	else if (score >=80) {
		return 'B';
	}
	else if (score >= 70) {
		return 'C';
	}
	else {
		return 'D';
	}
}

int main10008() {
	int score;
	cin >> score;

	cout << Calculator(score);

	return 0;
}