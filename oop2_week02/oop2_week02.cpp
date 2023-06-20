#include <iostream>

int main() {
	int number = 0;
	bool isPrime = true;

	std::cout << "Input number : ";
	std::cin >> number;

	if (number < 2) {
		isPrime = false;
	}
	else {
		for (int i = 2; i < number; i++) {
			if (number % i == 0) {
				isPrime = false;
				break; // The loop terminates as soon as a divisor is found
			}
			//std::cout << i << " ";
		}
	}

	//if (isPrime != false)
	if (isPrime)  // remove comparison operator
		std::cout << number << " is prime number~\n";
	else
		std::cout << number << " is NOT prime number!\n";
	return 0;
}