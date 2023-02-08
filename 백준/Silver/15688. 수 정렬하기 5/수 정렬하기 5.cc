#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);

	int number_of_nums;
	std::cin >> number_of_nums;

	std::vector<int> nums(number_of_nums);
	for (int i = 0; i < number_of_nums; i++) {
		std::cin >> nums[i];
	}

	sort(nums.begin(), nums.end());

	for (int i = 0; i < number_of_nums; i++) {
		std::cout << nums[i] << '\n';
	}

	return 0;
}