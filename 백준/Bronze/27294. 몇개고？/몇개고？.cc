#include <iostream>

int main()
{
	int T, S;
	std::cin >> T >> S;

	if (T >= 12 && T <= 16 && S == 0) std::cout << 320;
	else std::cout << 280;

	return 0;
}