#include <iostream>
#include <vector>

std::pair<int, int> fibonacci(int k)
{
	std::vector<std::pair<int, int>> fib(k + 1);
	fib[0] = std::make_pair(1, 0);
	fib[1] = std::make_pair(0, 1);

	for (int i = 2; i <= k; i++) {
		fib[i].first = fib[i - 1].first + fib[i - 2].first;
		fib[i].second = fib[i - 1].second + fib[i - 2].second;
	}

	return fib[k];
}

int main()
{
	int K;
	std::cin >> K;

	std::pair<int, int> result = fibonacci(K);
	std::cout << result.first << ' ' << result.second;
		
	return 0;
}