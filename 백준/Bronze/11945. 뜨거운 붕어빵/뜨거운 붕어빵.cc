#include <iostream>

int main()
{
	int N, M;
	std::cin >> N >> M;

	std::string input;
	while (N--) {
		std::cin >> input;
		reverse(input.begin(), input.end());
		std::cout << input << '\n';
	}

	return 0;
}