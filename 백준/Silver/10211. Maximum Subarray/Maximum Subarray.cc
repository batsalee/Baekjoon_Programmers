#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);

	int number_of_testcase;
	std::cin >> number_of_testcase;

	int array_size;
	int input;
	while (number_of_testcase--) {
		std::cin >> array_size;
		std::vector<int> prefix_sum(array_size);

		std::cin >> prefix_sum[0];
		for (int i = 1; i < array_size; i++) {
			std::cin >> input;
			prefix_sum[i] = std::max(0, prefix_sum[i - 1]) + input;
		}

		std::cout << *std::max_element(prefix_sum.begin(), prefix_sum.end()) << '\n';
	}

	return 0;
}
