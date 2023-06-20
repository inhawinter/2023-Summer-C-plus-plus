#include <iostream>

int main() {
	int number = 0;
	//int count = 0;
	bool isPrime = true;  // less memory, readability

	std::cout << "Input number : ";
	std::cin >> number;

	for (int i = 2; i < number; i++) {
		if (number % i == 0) {
			//count++; //count = count + 1;
			isPrime = false; // remove add operation
		}
	}


	//if (count == 0)
	if (isPrime != 0)
		std::cout << number << " is prime number~\n";
	else
		std::cout << number << " is NOT prime number!\n";
	return 0;
}