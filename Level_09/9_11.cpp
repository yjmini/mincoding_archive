#include <iostream>
using namespace std;

struct Person
{
	int age;
	int height;
};

int main911() {
	Person a;
	Person b;

	cin >> a.age >> a.height >> b.age >> b.height;

	cout << (a.age + b.age) / 2 << " " ;
	cout << (a.height + b.height) / 2 << " ";

	return 0;
}