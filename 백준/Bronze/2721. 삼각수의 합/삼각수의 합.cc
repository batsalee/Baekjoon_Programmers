#include <iostream>

int main()
{
	int T;
	std::cin >> T;

	int n;
	while (T--) {
		std::cin >> n;
		
		// T(n) = n * (n + 1) / 2
		int W = 0;
		for (int i = 1; i <= n; i++) {
			W += i * (i + 1) * (i + 2) / 2;
		}

		std::cout << W << '\n';
	}

	return 0;
}