#include <iostream>
#include <vector>

int main()
{
	int N, M;
	std::cin >> N >> M;

	std::vector<int> basket(N), temp(N);
	for (int index = 0; index < N; index++) {
		basket[index] = temp[index] = index + 1;
	}

	int i, j, k;
	while (M--) {
		std::cin >> i >> j >> k;
		// k부터 넣고
		for (int index = 0; index <= j - k; index++) {
			temp[i - 1 + index] = basket[k - 1 + index];
		}
		// 남은거 넣고
		for (int index = 0; index < k - i; index++) {
			temp[i + j - k + index] = basket[i - 1 + index];
		}

		basket = temp;
	}
	
	for (int index = 0; index < N; index++) {
		std::cout << basket[index] << ' ';
	}
	
	return 0;
}