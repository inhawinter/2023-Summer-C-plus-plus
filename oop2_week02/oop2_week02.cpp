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
	int n1 = 0, n2 = 0;

	std::cout << "Input number #1 : ";
	std::cin >> n1;

	std::cout << "Input number #2 : ";
	std::cin >> n2;

	if (n1 > n2) {
		int temp = n1;
		n1 = n2;
		n2 = temp;
	}

	for (int i = n1; i <= n2; i++) {
		if (isPrime(i))
			std::cout << i << " ";
	}
	return 0;
}