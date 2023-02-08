#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	int number_of_fruits;
	std::cin >> number_of_fruits;

	int snakebird_length;
	std::cin >> snakebird_length;

	std::vector<int> heights(number_of_fruits);
	for (int i = 0; i < heights.size(); i++) {
		std::cin >> heights[i];
	}

	sort(heights.begin(), heights.end());

	for (int i = 0; i < heights.size(); i++) {
		if (snakebird_length >= heights[i]) snakebird_length++;
		else break;
	}

	std::cout << snakebird_length;

	return 0;
}