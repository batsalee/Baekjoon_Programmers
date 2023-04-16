#include <iostream>
#include <string>

int main()
{
	int N;
	std::cin >> N;

	for (int i = 1; i <= N; i++) {
		std::cout << std::string(N - i, ' ');
		std::cout << std::string(2 * i - 1, '*') << '\n';
	}

	return 0;
}