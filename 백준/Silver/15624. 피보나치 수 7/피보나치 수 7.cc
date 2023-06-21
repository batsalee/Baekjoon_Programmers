#include <iostream>
#include <vector>

int main()
{
	int n;
	std::cin >> n;

	std::vector<int> fibonacci(n + 1);
	fibonacci[0] = 0;
	fibonacci[1] = 1;

	for (int i = 2; i <= n; i++) {
		fibonacci[i] = (fibonacci[i - 1] + fibonacci[i - 2]) % 1000000007;
	}

	std::cout << fibonacci[n];
	
	return 0;
}