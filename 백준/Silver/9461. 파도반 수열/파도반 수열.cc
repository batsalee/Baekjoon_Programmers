#include <iostream>
#include <vector>

long long func(int n)
{
	std::vector<long long> f(n + 3);

	f[1] = f[2] = f[3] = 1;
	for (int i = 4; i <= n; i++) {
		f[i] = f[i - 2] + f[i - 3];
	}

	return f[n];
}

int main()
{
	int number_of_testcase;
	std::cin >> number_of_testcase;

	int input;
	while (number_of_testcase--) {
		std::cin >> input;
		std::cout << func(input) << '\n';
	}

	return 0;
}