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
		cout << this << " default constructor!\n";
		count++;
	}
	~Student() {
		cout << this << " destructor activated.. RIP!\n";
		count--;
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
	cout << Student::getCount() << '\n'; // 2
	return 0;
}
