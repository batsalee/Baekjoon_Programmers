#include <iostream>

int main()
{
	int N, M, K;
	std::cin >> N >> M >> K;

	std::cout << std::min(M, K) + std::min(N - M, N - K);

	return 0;
}