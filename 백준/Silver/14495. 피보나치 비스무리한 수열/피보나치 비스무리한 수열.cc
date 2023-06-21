#include <iostream>
#include <vector>

int main()
{
	int n;
	std::cin >> n;

	std::vector<long long> fibonacci(n + 1, 1);
	for (int i = 4; i <= n; i++) {
		fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 3];
	}

	std::cout << fibonacci[n];
	
	return 0;
}