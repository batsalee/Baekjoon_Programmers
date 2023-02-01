#include <iostream>
#include <vector>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);

	int number_of_spot;
	std::cin >> number_of_spot;

	std::vector<int> distances(number_of_spot + 1, 0);
	std::vector<int> ps(number_of_spot + 1, 0);
	for (int i = 1; i < number_of_spot + 1; i++) {
		std::cin >> distances[i];
		ps[i] = ps[i - 1] + distances[i];
	}

	int answer = 0;
	int dis;
	for (int i = 0; i < number_of_spot; i++) {
		for (int j = i + 1; j < number_of_spot + 1; j++) {
			dis = ps[j] - ps[i];
			answer = std::max(answer, std::min(dis, ps.back() - dis));
		}
	}

	std::cout << answer;

	return 0;
}