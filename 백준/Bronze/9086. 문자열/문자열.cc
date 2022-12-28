#include <iostream>

int main()
{
	int number_of_testcase;
	std::cin >> number_of_testcase;

	std::string str;
	while (number_of_testcase--) {
		std::cin >> str;
		std::cout << str[0] << str[str.length() - 1] << '\n';
	}

	return 0;
}