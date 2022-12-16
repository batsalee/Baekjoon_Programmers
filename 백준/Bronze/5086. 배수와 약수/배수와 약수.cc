#include <iostream>

int main()
{
	int num1, num2;
	while (true) {
		std::cin >> num1 >> num2;
		if (num1 == 0 && num2 == 0) break;

		if (num2 % num1 == 0) std::cout << "factor" << '\n';
		else if (num1 % num2 == 0) std::cout << "multiple" << '\n';
		else std::cout << "neither" << '\n';
	}

	return 0;
}