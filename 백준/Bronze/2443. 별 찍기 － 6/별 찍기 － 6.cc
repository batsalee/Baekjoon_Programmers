#include <iostream>
#include <string>

int main()
{
	int N;
	std::cin >> N;

	for (int i = N; i > 0; i--) {
		std::cout << std::string(N - i, ' ');
		std::cout << std::string(2 * i - 1, '*');
		std::cout << '\n';
	}

	return 0;
}