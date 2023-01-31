#include <iostream>
#include <cstdlib>

int main()
{
	int input, score = 0;

	for (int i = 0; i < 10; i++) {
		std::cin >> input;

		if (std::abs(100 - (score + input)) <= std::abs(100 - score))
			score += input;
		else
			break;
	}

	std::cout << score;

	return 0;
}