#include <iostream>
#include <vector>
#include <cmath>

std::vector<bool> isPrimenumber;

void checkPrimenumber(int max)
{
	isPrimenumber.resize(max + 1, true);
	isPrimenumber[0] = false;
	isPrimenumber[1] = false;

	for (int i = 2; i <= sqrt(max); i++) {
		if (isPrimenumber[i]) {
			for (int j = 2 * i; j <= max; j += i) {
				isPrimenumber[j] = false;
			}
		}
	}
}

int main()
{
	checkPrimenumber(1000000);

	int T;
	std::cin >> T;

	int N, result;
	while (T--) {
		std::cin >> N;

		result = 0;
		for (int i = 2; i <= N / 2; i++) {
			if (isPrimenumber[N - i] && isPrimenumber[i]) result++;
		}

		std::cout << result << '\n';
	}

	return 0;
}