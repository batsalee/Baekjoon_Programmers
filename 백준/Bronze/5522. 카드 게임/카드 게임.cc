#include <iostream>

int main()
{
	int sum = 0, input;

	for (int i = 0; i < 5; i++) {
		std::cin >> input;
		sum += input;
	}

	std::cout << sum;

	return 0;
}