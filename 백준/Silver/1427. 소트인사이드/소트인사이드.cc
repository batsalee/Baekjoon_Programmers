#include <iostream>
#include <string>

int main()
{
	std::string input;
	std::cin >> input;

	for (int i = 9; i >= 0; i--) {
		int count = std::count(input.begin(), input.end(), '0' + i);
		std::cout << std::string(count, '0' + i);
	}

	return 0;
}