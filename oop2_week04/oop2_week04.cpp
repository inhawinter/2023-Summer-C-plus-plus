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
int Student::count = 0;  // initialize
int main() {
	Student s1;
	cout << s1.getCount() << '\n';
	cout << Student::getCount() << '\n';
	return 0;
}
