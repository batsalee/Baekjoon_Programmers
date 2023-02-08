#include <iostream>
#include <vector>
#include <cmath>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);

	int N, Q;
	std::cin >> N >> Q;

	std::vector<int> x(N), y(N);
	for (int i = 0; i < N; i++) std::cin >> x[i];
	for (int i = 0; i < N; i++) std::cin >> y[i];

	// 누적합 만들기
	std::vector<double> ps(N, 0), reverse_ps(N, 0);
	for (int i = 1; i < N; i++) {
		if (y[i] > y[i - 1]) {
			ps[i] = ps[i - 1] + 3 * sqrt(pow(x[i] - x[i - 1], 2) + pow(y[i] - y[i - 1], 2));
			reverse_ps[i] = reverse_ps[i - 1] + sqrt(pow(x[i] - x[i - 1], 2) + pow(y[i] - y[i - 1], 2));
		}
		else if (y[i] == y[i - 1]) {
			ps[i] = ps[i - 1] + 2 * (x[i] - x[i - 1]);
			reverse_ps[i] = reverse_ps[i - 1] + 2 * (x[i] - x[i - 1]);
		}
		else if (y[i] < y[i - 1]) {
			ps[i] = ps[i - 1] + sqrt(pow(x[i] - x[i - 1], 2) + pow(y[i - 1] - y[i], 2));
			reverse_ps[i] = reverse_ps[i - 1] + 3 * sqrt(pow(x[i] - x[i - 1], 2) + pow(y[i - 1] - y[i], 2));
		}
	}

	// 입력받고 출력하기	
	std::cout << std::fixed;
	std::cout.precision(12);

	int begin, end;
	while (Q--) {
		std::cin >> begin >> end;

		if (begin < end) std::cout << ps[end - 1] - ps[begin - 1] << '\n';
		else if (begin == end) std::cout << 0 << '\n';
		else if (begin > end) std::cout << reverse_ps[begin - 1] - reverse_ps[end - 1] << '\n';
	}

	return 0;
}