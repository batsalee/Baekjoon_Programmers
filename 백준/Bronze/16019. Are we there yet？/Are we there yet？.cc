#include <iostream>

int main()
{
	int PS[5] = {0};
	int input;
	for (int i = 1; i < 5; i++) {
		std::cin >> input;
		PS[i] = PS[i - 1] + input;
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			std::cout << std::abs(PS[j] - PS[i]) << ' ';
		}
		std::cout << '\n';
	}

	return 0;
}