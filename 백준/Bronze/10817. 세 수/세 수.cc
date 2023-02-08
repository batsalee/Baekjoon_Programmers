#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> nums(3);
	for (int i = 0; i < 3; i++) {
		std::cin >> nums[i];
	}

	sort(nums.begin(), nums.end());

	std::cout << nums[1];

	return 0;
}