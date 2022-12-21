#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	int size_of_triangle;
	std::cin >> size_of_triangle;

	std::vector<std::vector<int>> triangle;
	int input;
	for (int i = 1; i <= size_of_triangle; i++) {
		std::vector<int> sub_triangle;
		for (int j = 0; j < i; j++) {
			std::cin >> input;
			sub_triangle.push_back(input);
		}
		triangle.push_back(sub_triangle);
	}

	std::vector<std::vector<int>> result;
	std::vector<int> sub_result(1, triangle[0][0]);
	result.push_back(sub_result);

	for (int i = 1; i < size_of_triangle; i++) {
		sub_result.clear();
		for (int j = 0; j <= i; j++) {
			if (j == 0) sub_result.push_back(result[i - 1][0] + triangle[i][j]);
			else if (j == i) sub_result.push_back(result[i - 1][result[i - 1].size() - 1] + triangle[i][j]);
			else sub_result.push_back(std::max(result[i-1][j-1], result[i-1][j]) + triangle[i][j]);
		}
		result.push_back(sub_result);
	}

	std::cout << *std::max_element(result[size_of_triangle-1].begin(), result[size_of_triangle - 1].end());
	
	return 0;
}