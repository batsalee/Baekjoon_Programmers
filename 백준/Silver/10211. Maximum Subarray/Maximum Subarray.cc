#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);

	int number_of_testcase;
	std::cin >> number_of_testcase;

	int array_size, input, part_sum = 0;
	while (number_of_testcase--) {
		std::cin >> array_size;
		std::vector<int> prefix_sum(array_size);

		for (int i = 0; i < array_size; i++) {
			std::cin >> input;
			part_sum += input;
			prefix_sum[i] = part_sum;

			if (part_sum < 0) part_sum = 0;
		}

		std::cout << *std::max_element(prefix_sum.begin(), prefix_sum.end()) << '\n';
		part_sum = 0;
	}

	return 0;
}
