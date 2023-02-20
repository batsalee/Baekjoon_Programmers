#include <iostream>

int main()
{
	int price;
	std::cin >> price;

	std::cout << (int)(price * 0.78) << ' ' << (int)(price * 0.956);

	return 0;
}