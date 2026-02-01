#include <iostream>
using namespace std;

struct PROFILE
{
	char name[50];
	int age;
	int weight;
};

int main13001() {
	PROFILE pr1;
	PROFILE pr2;

	cin >> pr1.name >> pr1.age >> pr1.weight;
	cin >> pr2.name >> pr2.age >> pr2.weight;

	cout << pr1.name << " & " << pr2.name << endl;
	cout << "평균" << (pr1.age + pr2.age) / 2 << "세" << endl;
	cout << "평균" << (pr1.weight + pr2.weight) / 2 << "KG" << endl;

	return 0;
}