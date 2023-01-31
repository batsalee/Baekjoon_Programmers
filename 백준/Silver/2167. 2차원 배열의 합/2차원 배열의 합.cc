#include <iostream>
#include <vector>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);

	int row, col;
	std::cin >> row >> col;

	// 누적 합 배열 만들기
	std::vector<std::vector<int>> array(row, std::vector<int>(col));
	int input;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			std::cin >> input;

			if (i == 0 && j == 0) array[i][j] = input;
			else if (i == 0) array[i][j] = array[i][j - 1] + input;
			else if (j == 0) array[i][j] = array[i - 1][j] + input;
			else array[i][j] = array[i - 1][j] + array[i][j - 1] - array[i - 1][j - 1] + input;
		}
	}

	// [x1][y1] ~ [x2][y2]의 누적합 구해서 출력
	int number_of_testcase, x1, y1, x2, y2;
	std::cin >> number_of_testcase;
	while (number_of_testcase--) {
		std::cin >> x1 >> y1 >> x2 >> y2;
		x1--; y1--; x2--; y2--;

		if (x1 == 0 && y1 == 0) std::cout << array[x2][y2] << '\n';
		else if (x1 == 0) std::cout << array[x2][y2] - array[x2][y1 - 1] << '\n';
		else if (y1 == 0) std::cout << array[x2][y2] - array[x1 - 1][y2] << '\n';
		else std::cout << array[x2][y2] - array[x2][y1 - 1] - array[x1 - 1][y2] + array[x1 - 1][y1 - 1] << '\n';
	}

	return 0;
}

