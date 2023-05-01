#include <iostream>

int main()
{
	int A, B, C, D, E;
	std::cin >> A >> B >> C >> D >> E;

	if (A < 0 && B < 0) std::cout << -1 * (A - B) * C;
	else if (A < 0 && B > 0) std::cout << (-1 * A * C) + D + (B * E);
	else if (A > 0 && B > 0) std::cout << (B - A) * E;

	return 0;
}