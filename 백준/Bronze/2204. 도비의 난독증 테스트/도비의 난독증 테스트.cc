#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);

	int n;
	while (true) {
		std::cin >> n;
		if (n == 0) break;

		std::vector<std::string> words(n);
		std::map<std::string, int> wi; // <word, index>
		std::string input;
		for (int i = 0; i < n; i++) {
			std::cin >> input;

			words[i] = input;			
			std::transform(input.begin(), input.end(), input.begin(), [](char c) { return tolower(c); });
			wi[input] = i;
		}

		std::cout << words[wi.begin()->second] << '\n';
	}

	return 0;
}