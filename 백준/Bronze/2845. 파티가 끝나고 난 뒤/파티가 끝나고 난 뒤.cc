#include <iostream>

int main()
{
	int L, P;
	std::cin >> L >> P;

	int N;
	for (int i = 0; i < 5; i++) {
		std::cin >> N;
		std::cout << N - (L * P) << ' ';
	}

	return 0;
}