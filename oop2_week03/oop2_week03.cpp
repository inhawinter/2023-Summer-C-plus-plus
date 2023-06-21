#include <iostream>
using namespace std;

void test(int* pa) {  // call by pointer
	*pa = 7;
	cout << pa << '\n';
}

int main() {
	int a = 1;
	cout << &a << '\n';
	cout << a << '\n';
	test(&a);
	cout << a << '\n';

	return 0;
}