#include <iostream>

int main()
{
	int burger_price[3], drink_price[2];
	for (int i = 0; i < 3; i++) {
		std::cin >> burger_price[i];
	}
	for (int i = 0; i < 2; i++) {
		std::cin >> drink_price[i];
	}

	std::cout << std::min(std::min(burger_price[0], burger_price[1]), burger_price[2]) + std::min(drink_price[0], drink_price[1]) - 50;

	return 0;
}