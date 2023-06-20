#include <iostream>

int main() {
	int number = 0;
	int count = 0;

	std::cout << "Input number : ";
	std::cin >> number;

	for (int i = 1; i <= number; i++) {
		if (number % i == 0) {
			count++; //count = count + 1;
		}
	}


	if (count == 2)
		std::cout << number << " is prime number~\n";
	else
		std::cout << number << " is NOT prime number!\n";
	return 0;
}