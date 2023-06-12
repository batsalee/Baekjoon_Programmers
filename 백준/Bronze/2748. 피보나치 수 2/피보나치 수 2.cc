#include <iostream>
#include <vector>

std::vector<long long> fibonacci;

long long fibo_cal(int n)
{
	fibonacci[0] = 0;
	fibonacci[1] = 1;

	for (int i = 2; i <= n; i++) {
		fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
	}

	return fibonacci[n];
}

int main()
{
	int n;
	std::cin >> n;
	fibonacci.resize(n + 2);

	std::cout << fibo_cal(n);

	return 0;
}