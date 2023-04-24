#include <iostream>
#include <vector>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);

	int N;
	std::cin >> N;

	std::vector<int> A(N + 1, 0);
	std::vector<int> PS(N + 1, 0);
	for (int i = 1; i < N + 1; i++) {
		std::cin >> A[i];
		PS[i] = PS[i - 1] + A[i];
	}

	int M;
	std::cin >> M;

	int i, j;
	while (M--) {
		std::cin >> i >> j;
		std::cout << PS[j] - PS[i - 1] << '\n';
	}

	return 0;
}