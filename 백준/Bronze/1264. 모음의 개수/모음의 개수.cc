#include <iostream>
#include <string>

int main()
{
	std::string input;
	while (true) {
		getline(std::cin, input);
		if (input == "#") break;

		int count = 0;
		for (const char& i : input) {
			if (i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u'
				|| i == 'A' || i == 'E' || i == 'I' || i == 'O' || i == 'U') count++;
		}

		std::cout << count << '\n';
	}

	return 0;
}