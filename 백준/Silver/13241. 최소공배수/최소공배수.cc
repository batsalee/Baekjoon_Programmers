#include <iostream>
#include <numeric>

int main() {
	long long A, B;
	std::cin >> A >> B;

	std::cout << std::lcm(A, B);

	return 0;
}