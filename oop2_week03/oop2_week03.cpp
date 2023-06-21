#include <iostream>
using namespace std;

int main() {
	int a = 9;
	int b = 3;
	const int* const pa = &a;
	
	//*pa = 10;
	//pa = &b;
	a = 10;

	cout << *pa << '\n';

	// LLP64 or 4/4/8 (int and long are 32-bit, pointer is 64-bit)
	cout << sizeof(long int) << '\n';
	cout << sizeof(int*) << '\n';

	//64 bit systems :
	//  LLP64 or 4 / 4 / 8 (intand long are 32 - bit, pointer is 64 - bit)
	//	Win32 API(also called the Windows API) with compilation target 64 - bit ARM(AArch64) or x86 - 64 (a.k.a.x64)
	//	LP64 or 4 / 8 / 8 (int is 32 - bit, longand pointer are 64 - bit)
	//	Unix and Unix - like systems(Linux, macOS)
	// https://en.cppreference.com/w/cpp/language/types

	return 0;
}