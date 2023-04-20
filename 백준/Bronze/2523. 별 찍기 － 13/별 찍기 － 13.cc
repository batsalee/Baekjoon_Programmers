#include <iostream>
#include <string>

int main()
{
	int N;
	std::cin >> N;

	for (int i = 1; i <= N; i++) {
		std::cout << std::string(i, '*');
		std::cout << '\n';
	}

	for (int i = N - 1; i > 0; i--) {
		std::cout << std::string(i, '*');
		std::cout << '\n';
	}

	return 0;
}