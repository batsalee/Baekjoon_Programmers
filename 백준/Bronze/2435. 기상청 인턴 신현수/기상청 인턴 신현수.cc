#include <iostream>
#include <vector>

int main()
{
	int day, K;
	std::cin >> day >> K;

	std::vector<int> prefix_sum(day + 1);
	int input;
	for (int i = 1; i < day + 1; i++) {
		std::cin >> input;
		prefix_sum[i] = prefix_sum[i - 1] + input;
	}

	int answer = -10001;
	for (int i = 0; i <= day - K; i++) {
		answer = std::max(answer, prefix_sum[K + i] - prefix_sum[i]);
	}

	std::cout << answer;

	return 0;
}
