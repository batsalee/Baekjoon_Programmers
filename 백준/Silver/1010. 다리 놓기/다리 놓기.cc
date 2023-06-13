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

/* 생각 공간
* 
f(0)
N C N
= N! / N! / 0!

f(1)
N C N-1
 = N! / N-1! / 1!

f(2)
N+1 C N-1
= (N+1)! / N-1 ! /2!

f(3)
N+2 C N-1
= N+2 ! / N-1! / 3!

f(1) = f(0) * N / 1 = N
f(2) = N * (N+1) / 2
f(3) = f(2) * (n+2) / 3

정리하면 f(i) = f(i-1) * (N+i-1) / i

*/
