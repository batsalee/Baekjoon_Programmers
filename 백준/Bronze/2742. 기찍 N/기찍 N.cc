#include <iostream>

int main()
{
	int num;
	std::cin >> num;

	for (int i = num; i >= 1; i--) {
		std::cout << i << '\n';
	}

	return 0;
}