#include <iostream>
#include <vector>

int main()
{
	int N, M;
	std::cin >> N >> M;

	std::vector<int> array(N + 1);
	for (int i = 0; i < N; i++) {
		std::cin >> array[i];
	}

	int l = 0, r = 0, sum = 0, result = 0;
	while (r <= N) {
		if (sum >= M) { sum -= array[l++]; }
		else if (sum < M) { sum += array[r++]; }

		if (sum == M) result++;
	}

	std::cout << result;

	return 0;
}