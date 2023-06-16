#include <iostream>
#include <vector>

int main()
{
	int n, k;
	std::cin >> n >> k;

	std::vector<std::vector<int>> pascal;
	pascal.push_back({1});
	pascal.push_back({1, 1});

	for (int i = 2; i < n; i++) {
		std::vector<int> temp(i+1, 1);
		for (int j = 1; j < i; j++) {
			temp[j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
		}

		pascal.push_back(temp);
	}

	std::cout << pascal[n-1][k-1];

	return 0;
}