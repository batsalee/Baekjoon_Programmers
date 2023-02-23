#include <iostream>

int main()
{
	int A, B, C, D;
	std::cin >> A >> B >> C >> D;

	std::cout << ((A + D < B + C) ? A + D : B + C);

	return 0;
}