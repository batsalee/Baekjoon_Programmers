#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	int number_of_coordinate;
	std::cin >> number_of_coordinate;

	std::vector<int> coordinates(number_of_coordinate);
	std::vector<int> sorted(number_of_coordinate);
	int input;
	for (int i = 0; i < number_of_coordinate; i++) {
		std::cin >> input;
		coordinates[i] = input;
		sorted[i] = input;		
	}
	sort(sorted.begin(), sorted.end());
	sorted.erase(std::unique(sorted.begin(), sorted.end()), sorted.end());

	for (int& i : coordinates) {
		std::cout << std::lower_bound(sorted.begin(), sorted.end(), i) - sorted.begin() << ' '; 
	}

	return 0;
}