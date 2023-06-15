#include <iostream>

long long fibonacci(int N)
{
	long long fib[81];
	fib[1] = 4;
	fib[2] = 6;

	for (int i = 3; i <= N; i++) {
		fib[i] = fib[i - 1] + fib[i - 2];
	}

	return fib[N];
}

int main()
{
	int N;
	std::cin >> N;
	std::cout << fibonacci(N);

	return 0;
}