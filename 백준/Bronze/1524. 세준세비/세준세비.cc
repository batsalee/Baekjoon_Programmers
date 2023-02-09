#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);

	int T;
	std::cin >> T;

	while (T--) {
		int N, M;
		std::cin >> N >> M;
		
		std::vector<int> S(N), B(M);
		for (int i = 0; i < N; i++) std::cin >> S[i];
		for (int i = 0; i < M; i++) std::cin >> B[i];

		sort(S.begin(), S.end());
		sort(B.begin(), B.end());

		int Si = 0, Bi = 0;
		for (int i = 0; i < N + M; i++) {
			if (S[Si] >= B[Bi]) Bi++;
			else Si++;

			if (Si == N) {
				std::cout << "B\n";
				break;
			}

			if (Bi == M) {
				std::cout << "S\n";
				break;
			}
		}
	}

	return 0;
}