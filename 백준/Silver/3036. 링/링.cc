#include <iostream>
#include <vector>
#include <numeric>

int main()
{
	int N;
	std::cin >> N;

	std::vector<int> r(N);
	for (int i = 0; i < N; i++) {
		std::cin >> r[i];
	}

	for (int i = 1; i < N; i++) {
		if (r[0] > r[i]) {
			if (r[0] % r[i] == 0) std::cout << r[0] / r[i] << "/1\n";
			else {
				if (r[i] == std::gcd(r[0], r[i])) std::cout << r[0] << '/' << r[i] << "\n";
				else std::cout << r[0] / std::gcd(r[0], r[i]) << '/' << r[i] / std::gcd(r[0], r[i]) << '\n';
			}
		}
		else if (r[0] == r[i]) std::cout << "1/1\n";
		else {
			if (r[i] % r[0] == 0) std::cout << "1/" << r[i] / r[0] << "\n";
			else {
				if (r[0] == std::gcd(r[0], r[i])) std::cout << r[0] << '/' << r[i] << "\n";
				else std::cout << r[0] / std::gcd(r[0], r[i]) << '/' << r[i] / std::gcd(r[0], r[i]) << '\n';
			}
		}
	}

	return 0;
}