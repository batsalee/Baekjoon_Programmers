#include <iostream>
#include <vector>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);

	int len, part_size;
	std::cin >> len >> part_size;

	std::vector<long long> prefix_sum(len);
	int input;
	std::cin >> prefix_sum[0];
	for (int i = 1; i < len; i++) {
		std::cin >> input;
		prefix_sum[i] = prefix_sum[i - 1] + input;
	}

	long long max = prefix_sum[part_size-1];
	for (int i = 0; i < len - part_size; i++) {
		max = std::max(max, prefix_sum[part_size+i]-prefix_sum[i]);
	}

	std::cout << max;

	return 0;
}