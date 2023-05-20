#include <iostream>
#include <array>
#include <algorithm>

int main() {	
	std::array<int, 3> sides;
	for (int i = 0; i < 3; i++) {
		std::cin >> sides[i];
	}
	std::sort(sides.begin(), sides.end());

	if (sides[0] + sides[1] <= sides[2]) sides[2] = sides[0] + sides[1] - 1;

	std::cout << sides[0] + sides[1] + sides[2];

	return 0;
}