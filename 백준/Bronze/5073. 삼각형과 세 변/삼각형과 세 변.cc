#include <iostream>

int main() {	
	int a, b, c;

	while (true) {
		std::cin >> a >> b >> c;

		if (a == 0 && b == 0 && c == 0) return 0;

		int max = std::max(std::max(a, b), c);
		if (a + b + c - max <= max) std::cout << "Invalid" << '\n';
		else if (a == b && b == c) std::cout << "Equilateral" << '\n';
		else if (a == b || b == c || a == c) std::cout << "Isosceles" << '\n';
		else std::cout << "Scalene" << '\n';
	}
}