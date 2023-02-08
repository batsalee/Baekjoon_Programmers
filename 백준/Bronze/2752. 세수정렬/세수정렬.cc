#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> nums(3);
	for (int i = 0; i < 3; i++) {
		std::cin >> nums[i];
	}

	std::sort(nums.begin(), nums.end());
	
	for (int i = 0; i < 3; i++) {
		std::cout << nums[i] << ' ';
	}

	return 0;
}