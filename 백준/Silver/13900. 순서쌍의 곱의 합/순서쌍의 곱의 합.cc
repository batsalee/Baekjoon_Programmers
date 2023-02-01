#include <iostream>
#include <vector>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);

	int len;
	std::cin >> len;
	
	std::vector<int> array(len);
	std::vector<long long> prefix_sum(len);
	
	std::cin >> array[0];
	prefix_sum[0] = array[0];
	for (int i = 1; i < len; i++) {
		std::cin >> array[i];
		prefix_sum[i] = prefix_sum[i - 1] + array[i];
	}

	long long total = 0;
	for (int i = 0; i < len-1; i++) {
		total += array[i] * (prefix_sum.back() - prefix_sum[i]);
	}

	std::cout << total;

	return 0;
}