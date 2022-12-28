#include <iostream>

int main()
{
	int nums[5];
	for (int i = 0; i < 5; i++) {
		std::cin >> nums[i];
	}

	std::cout << ((nums[0] * nums[0]) + (nums[1] * nums[1]) + (nums[2] * nums[2]) +
		(nums[3] * nums[3]) + (nums[4] * nums[4])) % 10;

	return 0;
}