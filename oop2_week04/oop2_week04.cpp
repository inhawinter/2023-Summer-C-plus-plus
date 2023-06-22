#include <iostream>
#include <string>
using namespace std;

class Student {
private:
	int id;
	string name;
	static int count;
public:
	Student() {
		cout << "default constructor!\n";
		count++;
	}
	static int getCount() { // inline
		return count;
	}
};
void test() {
	Student s3;
	cout << Student::getCount() << '\n';
}
int Student::count = 0;  // initialize
int main() {
	Student s1;
	Student s2;
	cout << s1.getCount() << '\n';
	cout << Student::getCount() << '\n';
	test();
	cout << Student::getCount() << '\n'; // 3, ???
	return 0;
}
