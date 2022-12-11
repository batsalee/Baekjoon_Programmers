#include <iostream>
#include <set>

int main()
{
	std::string str;
	std::cin >> str;

	std::set<std::string> set;
	for (int i = 1; i <= str.length(); i++) {
		for (int j = 0; j < str.length() - i + 1; j++) {
			set.insert(str.substr(j, i));
		}
	}

	std::cout << set.size();

	return 0;
}