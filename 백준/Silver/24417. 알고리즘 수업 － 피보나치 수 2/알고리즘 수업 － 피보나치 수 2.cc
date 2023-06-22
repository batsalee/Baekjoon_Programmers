#include <iostream>

int fib(int N)
{
	int n = 2, n_1 = 1, n_2;
	for (int i = 0; i < N - 3; i++) {
		n_2 = n_1;
		n_1 = n;
		n = (n_1 + n_2) % 1000000007;
	}

	return n;
}

int main()
{
	int N;
	std::cin >> N;

	std::cout << fib(N) << ' ' << N - 2;

	return 0;
}