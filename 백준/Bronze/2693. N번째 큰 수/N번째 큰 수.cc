#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	int number_of_testcase;
	std::cin >> number_of_testcase;

	std::vector<int> nums(10);
	while (number_of_testcase--) {
		for (int i = 0; i < nums.size(); i++) {
			std::cin >> nums[i];
		}

		partial_sort(nums.begin(), nums.begin() + 3, nums.end(), [](int a, int b) { return a > b; });

		std::cout << nums[2] << '\n';
	}

	return 0;
}