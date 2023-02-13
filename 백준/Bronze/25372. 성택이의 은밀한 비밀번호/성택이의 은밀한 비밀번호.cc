#include <iostream>

int main()
{
	int N;
	std::cin >> N;

	std::string str;
	while (N--) {
		std::cin >> str;
		if (str.length() >= 6 && str.length() <= 9) std::cout << "yes\n";
		else std::cout << "no\n";
	}

	return 0;
}