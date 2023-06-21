#include <iostream>
using namespace std;

int main() {
	int a = 1;
	int& ra = a;
	int b = 2;
	//int& ra = b;
	//int& rc = 99;
	const int& rc = 99;
	const int d = 7;
	//int& rd = d;
	const int& rd = d;

	cout << a << " " << ra << '\n';
	cout << rc << '\n';
	cout << d << " " << rd << '\n';

	return 0;
}