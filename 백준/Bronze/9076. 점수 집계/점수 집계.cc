#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	int number_of_testcase;
	std::cin >> number_of_testcase;

	std::vector<int> scores(5);
	while (number_of_testcase--) {
		for (int i = 0; i < 5; i++) {
			std::cin >> scores[i];
		}

		sort(scores.begin(), scores.end());

		if (scores[3] - scores[1] >= 4) std::cout << "KIN\n";
		else std::cout << scores[1] + scores[2] + scores[3] << '\n';
	}

	return 0;
}