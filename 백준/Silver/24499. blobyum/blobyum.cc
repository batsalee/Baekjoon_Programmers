#include <iostream>
#include <vector>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);

	int len, size;
	std::cin >> len >> size;

	std::vector<int> array(len);
	std::vector<int> prefix_sum(len + size - 1);

	int input;
	for (int i = 0; i < len; i++) {
		std::cin >> input;

		array[i] = input;
		if (i == 0) prefix_sum[0] = input;
		else prefix_sum[i] = prefix_sum[i - 1] + input;
	}

	for (int i = len; i < len + size - 1; i++) {
		prefix_sum[i] = prefix_sum[i - 1] + array[i % len];
	}

	// max 찾기
	int max = prefix_sum[size - 1];
	for (int i = size; i < len + size - 1; i++) {
		max = std::max(max, prefix_sum[i] - prefix_sum[i-size]);
	}

	std::cout << max;

	return 0;
}