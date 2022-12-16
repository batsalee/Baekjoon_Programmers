#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

int main()
{
	while (true) {
		std::vector<int> triangle(3);
		std::cin >> triangle[0] >> triangle[1] >> triangle[2];

		if (!triangle[0] && !triangle[1] && !triangle[2]) break;
		sort(triangle.begin(), triangle.end());
		if (pow(triangle[0], 2) + pow(triangle[1], 2) == pow(triangle[2], 2))
			std::cout << "right" << '\n';
		else
			std::cout << "wrong" << '\n';
	}

	return 0;
}