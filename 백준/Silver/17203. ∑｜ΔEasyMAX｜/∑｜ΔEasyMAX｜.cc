#include <iostream>
#include <vector>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);

	int len, number_of_testcase;
	std::cin >> len >> number_of_testcase;

	std::vector<int> array(len);
	std::vector<int> prefix_sum(len, 0);
	
	int input;
	std::cin >> array[0];
	for (int i = 1; i < len; i++) {
		std::cin >> input;
		array[i] = input;
		prefix_sum[i] = prefix_sum[i - 1] + std::abs(array[i] - array[i - 1]);
	}

	int begin, end;
	while (number_of_testcase--) {
		std::cin >> begin >> end;
		std::cout << prefix_sum[end - 1] - prefix_sum[begin - 1] << '\n';
	}

	return 0;
}