#include <iostream>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);

	int input, sum = 0;
	while (true) {
		std::cin >> input;
		if (input == -1) break;
		sum += input;
	}

	std::cout << sum;

	return 0;
}