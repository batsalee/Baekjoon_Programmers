#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);

	int N;
	std::cin >> N;

	std::vector<int> nums(N);
	for (int i = 0; i < N; i++) {
		std::cin >> nums[i];
	}

	sort(nums.begin(), nums.end(), std::greater<int>());

	for (int i = 0; i < N; i++) {
		std::cout << nums[i] << '\n';
	}

	return 0;
}