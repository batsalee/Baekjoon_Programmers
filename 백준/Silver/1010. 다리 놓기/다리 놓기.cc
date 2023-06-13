#include <iostream>
#include <numeric>

int main()
{
	int T;
	std::cin >> T;

	while (T--) {
		int N, M;
		std::cin >> N >> M;			

		long long f[30] = { 0 };
		f[0] = 1;
		for (int i = 1; i < M - N + 1; i++) { // dp
			f[i] = f[i - 1] * (N + i - 1) / i;
		}

		std::cout << std::accumulate(f, f + M - N + 1, 0LL) << '\n';
	}

	return 0;
}