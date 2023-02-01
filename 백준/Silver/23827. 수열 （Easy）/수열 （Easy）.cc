#include <iostream>
#include <vector>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);

	int size;
	std::cin >> size;

	std::vector<int> array(size);
	std::vector<long long> prefix_sum(size);

	int input;
	for (int i = 0; i < size; i++) {
		std::cin >> input;

		array[i] = input;
		if (i == 0) prefix_sum[0] = input;
		else prefix_sum[i] = prefix_sum[i - 1] + input;
	}

	int total = 0;
	const int remainder = 1000000007;
	for (int i = 0; i < size - 1; i++) {
		total = ( (total % remainder) + ( (array[i] * (prefix_sum.back() - prefix_sum[i])) % remainder) ) % remainder;
	}

	std::cout << total;

	return 0;
}