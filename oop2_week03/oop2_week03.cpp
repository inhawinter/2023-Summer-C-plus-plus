#include <iostream>
using namespace std;

int main() {
	int a = 9;
	int* pa = &a;
	int** ppa = &pa;
	char univ[] = "inha\n";
	//char univ[] = { 'i', 'n', 'h', 'a', '\n' };
	//char univ[] = { 'i', 'n', 'h', 'a', '\n', '\0'};
	//char univ[] = { 'i', 'n', '\0', 'h', 'a', '\n'};
	//char univ[] = { 'i', 'n', 0, 'h', 'a', '\n' };
	//char univ[] = { 'i', 'n', NULL, 'h', 'a', '\n' };
	//char univ[] = { 'i', 'n', nullptr, 'h', 'a', '\n' };  // error

	cout << univ;
	
	ppa = nullptr;  // C++11

	//ppa = 0;
	//ppa = NULL;
	 
	//ppa = '\0';
	if (ppa) {
		cout << a << " " << *pa << " " << **ppa << '\n';
		cout << &a << " " << pa << " " << *ppa << '\n';
	}

	return 0;
}



