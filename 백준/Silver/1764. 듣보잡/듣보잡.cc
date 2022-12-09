#include <iostream>
#include <map>
#include <algorithm>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	std::map<std::string, int> map;
	int number_of_never_heard, number_of_never_seen;
	std::cin >> number_of_never_heard;
	std::cin >> number_of_never_seen;

	std::string name;
	for (int i = 0; i < number_of_never_heard + number_of_never_seen; i++) {
		std::cin >> name;
		map[name]++;
	}

	std::cout << std::count_if(map.begin(), map.end(), [](std::pair<std::string, int> p) { return (p.second == 2); }) << '\n';
	for (auto itr = map.begin(); itr != map.end(); itr++) {
		if (itr->second == 2) std::cout << itr->first << '\n';
	}

	return 0;
}