#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	printf("%.15lf\n", 2.7 + 3.1);

	int a = 9;
	int* pa = &a;
	double b = 2.7;
	void* pv = pa;
	//pa = &b;	

	cout << &a << " " << pa << '\n';
	cout << a << " " << *(int*)pv << '\n';

	pv = &b;
	//cout << a << " " << *(int*)pv << '\n';
	cout << a << " " << *(double*)pv << '\n';
	return 0;
}