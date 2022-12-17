#include <iostream>
#include <vector>

int fibonacci(int n)
{
	std::vector<int> f(n + 1);

	f[0] = f[1] = 1;
	for (int i = 2; i <= n; i++) {
		f[i] = ((f[i - 1] % 15746) + (f[i - 2] % 15746)) % 15746;
	}

	return f[n];
}

int main()
{
	int N;
	std::cin >> N;

	std::cout << fibonacci(N);

	return 0;
}