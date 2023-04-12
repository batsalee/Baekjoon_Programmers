#include <iostream>

int main()
{
	int N, D = 0, P = 0;
	std::cin >> N;

	char winner;
	while (N--) {
		std::cin >> winner;
		(winner == 'D') ? D++ : P++;

		if (std::abs(D - P) >= 2) break;
	}

	std::cout << D << ':' << P;

	return 0;
}