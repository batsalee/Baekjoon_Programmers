#include <iostream>

int main()
{
	int distance = 0, input;
	for (int i = 0; i < 4; i++) {
		std::cin >> input;
		distance += input;
	}

	std::cout << distance / 60 << '\n' << distance % 60;

	return 0;
}