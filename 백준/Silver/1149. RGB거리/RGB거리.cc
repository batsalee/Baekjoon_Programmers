#include <iostream>
#include <vector>

int main()
{
	int number_of_house;
	std::cin >> number_of_house;

	std::vector<std::vector<int>> costs(number_of_house, std::vector<int>(3));
	for (int i = 0; i < number_of_house; i++) {
		for (int j = 0; j < 3; j++) {
			std::cin >> costs[i][j];
		}
	}

	std::vector<int> result_r(number_of_house); result_r[0] = costs[0][0];
	std::vector<int> result_g(number_of_house); result_g[0] = costs[0][1];
	std::vector<int> result_b(number_of_house); result_b[0] = costs[0][2];
	
	for (int i = 1; i < number_of_house; i++) {
		result_r[i] = std::min(result_g[i - 1], result_b[i - 1]) + costs[i][0];
		result_g[i] = std::min(result_r[i - 1], result_b[i - 1]) + costs[i][1];
		result_b[i] = std::min(result_r[i - 1], result_g[i - 1]) + costs[i][2];
	}

	std::cout << std::min(std::min(result_r.back(), result_g.back()), result_b.back());

	return 0;
}