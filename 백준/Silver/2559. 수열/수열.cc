#include <iostream>
#include <vector>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);

	int size, k;
	std::cin >> size >> k;

	std::vector<int> array(size);
	std::vector<int> prefix_sum(size);

	int input;
	for (int i = 0; i < size; i++) {
		std::cin >> input;
		array[i] = input;

		if (i == 0) prefix_sum[0] = input;
		else prefix_sum[i] = prefix_sum[i - 1] + input;
	}

	int max = prefix_sum[k - 1];
	for (int i = k; i < size; i++) {
		max = std::max(max, prefix_sum[i - 1] - prefix_sum[i - k] + array[i]);
	}

	std::cout << max;

	return 0;
}