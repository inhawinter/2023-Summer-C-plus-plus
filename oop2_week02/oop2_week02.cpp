#include <iostream>

bool isPrime(int n) { // pass by value
	if (n < 2) {
		return false;
	}
	else {
		for (int i = 2; i < n; i++) {
			if (n % i == 0) {
				//isPrime = false;
				//break;
				return false;
			}
		}
	}
	return true;
}

int main() {
	int number = 0;

	std::cout << "Input number : ";
	std::cin >> number;

	if (isPrime(number))
		std::cout << number << " is prime number~\n";
	else
		std::cout << number << " is NOT prime number!\n";
	return 0;
}