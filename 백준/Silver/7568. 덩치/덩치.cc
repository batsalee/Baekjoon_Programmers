#include <iostream>
#include <vector>

int main()
{
	int number_of;
	std::cin >> number_of;

	std::vector<std::pair<int, int>> infos;
	int height, weight;
	while (number_of--) {
		std::cin >> weight >> height;
		infos.push_back( std::make_pair(weight, height) );
	}

	int count;
	for (int i = 0; i < infos.size(); i++) {
		count = 1;
		for (int j = 0; j < infos.size(); j++) {
			if (i == j) continue;
			if (infos[j].first > infos[i].first && infos[j].second > infos[i].second) count++;
		}
		std::cout << count << ' ';
	}

	return 0;
}