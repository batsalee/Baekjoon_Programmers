#include <iostream>
#include <vector>

typedef struct
{
	unsigned int j;
	unsigned int o;
	unsigned int i;
} JOI;

JOI ps[1001][1001];

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);

	int M, N;
	std::cin >> M >> N;

	int number_of_testcase;
	std::cin >> number_of_testcase;

	// 지도 입력받고 누적합
	std::vector<std::vector<char>> array(M + 1, std::vector<char>(N + 1, 0));
	for (int m = 1; m <= M; m++) {
		for (int n = 1; n <= N; n++) {
			std::cin >> array[m][n];
			ps[m][n].j = ps[m - 1][n].j + ps[m][n - 1].j - ps[m - 1][n - 1].j;
			ps[m][n].o = ps[m - 1][n].o + ps[m][n - 1].o - ps[m - 1][n - 1].o;
			ps[m][n].i = ps[m - 1][n].i + ps[m][n - 1].i - ps[m - 1][n - 1].i;

			if (array[m][n] == 'J') ps[m][n].j++;
			else if (array[m][n] == 'I') ps[m][n].i++;
			else if (array[m][n] == 'O') ps[m][n].o++;
		}
	}

	// 좌표 입력받고 결과출력
	int x1, y1;
	int x2, y2;
	while (number_of_testcase--) {
		std::cin >> x1 >> y1 >> x2 >> y2;

		std::cout << ps[x2][y2].j - ps[x1 - 1][y2].j - ps[x2][y1 - 1].j + ps[x1 - 1][y1 - 1].j << ' ';
		std::cout << ps[x2][y2].o - ps[x1 - 1][y2].o - ps[x2][y1 - 1].o + ps[x1 - 1][y1 - 1].o << ' ';
		std::cout << ps[x2][y2].i - ps[x1 - 1][y2].i - ps[x2][y1 - 1].i + ps[x1 - 1][y1 - 1].i << ' ';
		std::cout << '\n';
	}

	return 0;
}