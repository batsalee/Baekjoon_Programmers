#include <iostream>
#include <string>

int main()
{
	int N;
	std::cin >> N;
	std::cin.ignore(1);

	for (int i = 1; i <= N; i++) {
		std::string input = "";
		std::getline(std::cin, input);

		std::cout << i << ". " << input << '\n';
	}

	return 0;
}