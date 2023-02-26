#include <iostream>

int main()
{
	int price, count, money;
	std::cin >> price >> count >> money;

	std::cout << ( (price * count > money) ? price * count - money : 0 );

	return 0;
}