#include <iostream>
#include <string>

int main()
{
	int N;
	std::cin >> N;

	for (int i = 1; i <= N; i++) {
		std::cout << std::string(N - i, ' ');
		std::cout << std::string(2 * i - 1, '*');
		std::cout << '\n';
	}

	for (int i = N - 1; i > 0; i--) {
		std::cout << std::string(N - i, ' ');
		std::cout << std::string(2 * i - 1, '*');
		std::cout << '\n';
	}

	return 0;
}