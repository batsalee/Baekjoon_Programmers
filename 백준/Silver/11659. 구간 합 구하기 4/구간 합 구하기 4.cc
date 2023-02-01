#include <iostream>
#include <vector>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);

	int size, number_of_testcase;
	std::cin >> size >> number_of_testcase;

	std::vector<long long> prefix_sum(size);
	std::cin >> prefix_sum[0];

	int input;
	for (int i = 1; i < size; i++) {
		std::cin >> input;
		prefix_sum[i] = prefix_sum[i - 1] + input;
	}

	int begin, end;
	while (number_of_testcase--) {
		std::cin >> begin >> end;

		if (begin == 1) std::cout << prefix_sum[end - 1] << '\n';
		else std::cout << prefix_sum[end - 1] - prefix_sum[begin - 2] << '\n';
	}

	return 0;
}