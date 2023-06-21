#include <iostream>
using namespace std;

void test(const int& ra) {  // call by reference
	ra = 7; // read only
	cout << &ra << '\n';
}

int main() {
	int a = 1;
	cout << &a << '\n';
	cout << a << '\n';
	test(a);
	cout << a << '\n';

	return 0;
}