#include <iostream>

int main()
{
	std::string input;
	std::cin >> input;

	std::string character = "MOBIS";

	for (int i = 0; i < character.length(); i++) {
		if (input.find(character[i]) == std::string::npos) {
			std::cout << "NO";
			return 0;
		}
	}

	std::cout << "YES";
	return 0;
}