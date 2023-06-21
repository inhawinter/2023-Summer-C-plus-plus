#include <iostream>
using namespace std;

void test(int& ra) {  // call by reference
	ra = 7;
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