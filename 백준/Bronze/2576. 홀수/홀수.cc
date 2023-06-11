#include <iostream>

int main()
{
	int input, min = 100, sum = 0;
	for (int i = 0; i < 7; i++) {
		std::cin >> input;

		if (input & 1) {
			sum += input;
			min = std::min(min, input);
		}
	}

	if (sum) std::cout << sum << '\n' << min;
	else std::cout << -1;

	return 0;
}