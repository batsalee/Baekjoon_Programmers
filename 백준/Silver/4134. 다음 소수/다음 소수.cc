#include <iostream>
#include <cmath>

bool isPrimenumber(long long n)
{
	if (n < 2) return false;

	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) return false;
	}

	return true;
}

int main() {
	int number_of_testcase;
	std::cin >> number_of_testcase;

	long long n;
	while (number_of_testcase--) {
		std::cin >> n;
		while (true) {
			if (isPrimenumber(n)) break;
			else n++;
		}
		std::cout << n << '\n';
	}

	return 0;
}