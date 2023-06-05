#include <iostream>

int main()
{
	int A, B, C;
	std::cin >> A >> B >> C;

	if (A + B >= 2 * C) std::cout << (A + B - 2 * C);
	else std::cout << A + B;

	return 0;
}