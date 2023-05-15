#include <iostream>
#include <set>

void fast()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
}

int main() {
	fast();

	int n;
	std::cin >> n;

	std::set<std::string> workers;
	std::string name, commute;
	while (n--) {
		std::cin >> name >> commute;

		if (commute == "enter") workers.insert(name);
		else if (commute == "leave") workers.erase(name);
	}

	for (auto iter = workers.rbegin(); iter != workers.rend(); iter++) {
		std::cout << *iter << '\n';
	}

	return 0;
}