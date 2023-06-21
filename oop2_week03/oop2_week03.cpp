#include <iostream>
using namespace std;

void test(int ra) {  // call by value
	ra = 7;
}

int main() {
	int a = 1;
	cout << a << '\n';
	test(a);
	cout << a << '\n';

	return 0;
}