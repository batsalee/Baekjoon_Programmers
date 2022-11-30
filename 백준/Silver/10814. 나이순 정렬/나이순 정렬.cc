#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	int test_case;
	std::cin >> test_case;

	std::vector<std::pair<int, std::string>> user_info;

	int age;
	std::string name;
	for (int i = 0; i < test_case; i++) {
		std::cin >> age >> name;
		user_info.push_back(std::make_pair(age, name));
	}

	stable_sort(user_info.begin(), user_info.end(),
		[](std::pair<int, std::string> a, std::pair<int, std::string> b) { return a.first < b.first; }
		);		

	for (int i = 0; i < user_info.size(); i++) {
		std::cout << user_info[i].first << ' ' << user_info[i].second << '\n';
	}

	return 0;
}