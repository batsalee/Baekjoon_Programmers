#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	int test_case;
	std::cin >> test_case;

	std::vector<std::pair<int, int>> array(test_case);
	for (int i = 0; i < test_case; i++) {
		int x, y;
		std::cin >> x >> y;
		array[i] = std::make_pair(x, y);
	}

	sort(array.begin(), array.end());

	for (std::pair<int, int> p : array) {
		std::cout << p.first << ' ' << p.second << '\n';
	}

	return 0;
}