#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);

	int N;
	std::cin >> N;

	std::vector<double> scores(N);
	for (int i = 0; i < N; i++) {
		std::cin >> scores[i];
	}

	partial_sort(scores.begin(), scores.begin() + 7, scores.end());

	std::cout << std::fixed;
	std::cout.precision(3);

	for (int i = 0; i < 7; i++) {
		std::cout << scores[i] << '\n';
	}

	return 0;
}