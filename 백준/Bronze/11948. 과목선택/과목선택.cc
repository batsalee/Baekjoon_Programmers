#include <iostream>

int main()
{
	int A, B, C, D, E, F;
	std::cin >> A >> B >> C >> D >> E >> F;

	// abcd 중 높은 3개 + ef중 높은 1개
	std::cout << A + B + C + D - std::min(std::min(A, B), std::min(C, D)) + std::max(E, F);

	return 0;
}