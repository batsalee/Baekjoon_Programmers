#include <iostream>

int main() {
	int T;
	std::cin >> T;

	int C;
	while (T--) {
		std::cin >> C;

		std::cout << C / 25 << ' ';
		C = C % 25;

		std::cout << C / 10 << ' ';
		C = C % 10;

		std::cout << C / 5 << ' ';
		C = C % 5;

		std::cout << C << '\n';
	}

	return 0;
}