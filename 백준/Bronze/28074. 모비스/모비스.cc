#include <iostream>

int main()
{
	std::string input;
	std::cin >> input;

	std::string character = "MOBIS";
	for (auto c : character) {
		if (input.find(c) == std::string::npos) {
			std::cout << "NO";
			return 0;
		}
	}

	std::cout << "YES";
	return 0;
}