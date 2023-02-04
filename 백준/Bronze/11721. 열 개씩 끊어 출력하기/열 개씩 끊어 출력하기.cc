#include <iostream>

int main()
{
	std::string str;
	std::cin >> str;

	for (int i = 0; i < str.length(); i++) {
		if (i != 0 && i % 10 == 0) std::cout << '\n';
		std::cout << str[i];
	}

	return 0;
}