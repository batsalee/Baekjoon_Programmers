#include <iostream>

int main()
{
	std::string input;
	std::cin >> input;

	for (char c : input) {
		std::cout << (char)(c^32);
	}

	return 0;
}