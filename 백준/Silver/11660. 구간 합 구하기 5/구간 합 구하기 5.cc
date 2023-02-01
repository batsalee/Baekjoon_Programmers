#include <iostream>
#include <vector>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);

	int size, number_of_testcase;
	std::cin >> size >> number_of_testcase;

	std::vector<std::vector<int>> ps(size, std::vector<int>(size));
	int input;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			std::cin >> input;

			if (i == 0 && j == 0) ps[0][0] = input;
			else if (i == 0) ps[i][j] = ps[i][j - 1] + input;
			else if (j == 0) ps[i][j] = ps[i - 1][j] + input;
			else ps[i][j] = ps[i - 1][j] + ps[i][j - 1] + input - ps[i - 1][j - 1];
		}
	}

	int x1, y1, x2, y2;
	while (number_of_testcase--) {
		std::cin >> x1 >> y1 >> x2 >> y2;
		x1--; y1--; x2--; y2--;

		if (x1 == 0 && y1 == 0) std::cout << ps[x2][y2] << '\n';
		else if (x1 == 0) std::cout << ps[x2][y2] - ps[x2][y1 - 1] << '\n';
		else if (y1 == 0) std::cout << ps[x2][y2] - ps[x1 - 1][y2] << '\n';
		else std::cout << ps[x2][y2] - ps[x1 - 1][y2] - ps[x2][y1 - 1] + ps[x1 - 1][y1 - 1] << '\n';
	}

	return 0;
}