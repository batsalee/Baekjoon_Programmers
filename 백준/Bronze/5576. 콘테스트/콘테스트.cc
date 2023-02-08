#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> W_score(10), K_score(10);
	
	for (int i = 0; i < 10; i++) {
		std::cin >> W_score[i];
	}
	for (int i = 0; i < 10; i++) {
		std::cin >> K_score[i];
	}

	std::partial_sort(W_score.begin(), W_score.begin() + 3, W_score.end(), [](int a, int b) { return a > b; });
	std::partial_sort(K_score.begin(), K_score.begin() + 3, K_score.end(), [](int a, int b) { return a > b; });

	std::cout << W_score[0] + W_score[1] + W_score[2] << ' ' << K_score[0] + K_score[1] + K_score[2];

	return 0;
}