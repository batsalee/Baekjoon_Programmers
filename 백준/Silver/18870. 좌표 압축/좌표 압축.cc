#include <iostream>
#include <vector>
#include <set>

int main()
{
	int number_of_coordinate;
	std::cin >> number_of_coordinate;

	std::vector<int> coordinates(number_of_coordinate);
	for (int i = 0; i < number_of_coordinate; i++) {
		std::cin >> coordinates[i];
	}

	std::set<int> for_sorting(coordinates.begin(), coordinates.end());
	std::vector<int> sorted(for_sorting.begin(), for_sorting.end());
	for (int& i : coordinates) {
		std::cout << std::lower_bound(sorted.begin(), sorted.end(), i) - sorted.begin() << ' '; 
	}

	return 0;
}