#include <iostream>
#include <string>

int main()
{
	int N;
	std::cin >> N;

	for (int i = 1; i <= N; i++) {
		std::cout << std::string(N - i, ' ');
		for (int j = 0; j < i; j++) { std::cout << "* "; }
		std::cout << '\n';
	}

	return 0;
}