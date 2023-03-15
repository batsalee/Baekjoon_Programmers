#include <iostream>

int main()
{
	int A, B, C, D;
	std::cin >> A >> B >> C >> D;

	std::cout << std::abs((A + D) - (B + C));

	return 0;
}