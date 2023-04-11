#include <iostream>
#include <string>

int main()
{
	std::string input;

	while (true) {
		getline(std::cin, input);
		if (input == "END") return 0;

		reverse(input.begin(), input.end());
		std::cout << input << '\n';
	}
}