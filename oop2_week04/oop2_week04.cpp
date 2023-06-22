#include <iostream>
using namespace std;

int main() {
	/*
	* fee : adult/10000/19+, teenager/7000/18~9, child/5000/8-
	*/
	int noOfPeople = 0;
	int total = 0;

	cout << "Input no of people : ";
	cin >> noOfPeople;
	int* pAge = new int[noOfPeople]; // dynamic memory allocation (heap memory)

	for (auto i = 0; i < noOfPeople; i++) {
		cout << "Input age : ";
		cin >> *(pAge + i);  // cin >> pAge[i];
	}
	for (auto i = 0; i < noOfPeople; i++) {
		int age = pAge[i];
		if (age >= 19)
			total = total + 10000;
		else if (age >= 8)
			total = total + 7000;
		else
			total = total + 5000;
	}
	cout << "People : " << noOfPeople << ", Fee : " << total << '\n';
	// memory leak

	return 0;
}
