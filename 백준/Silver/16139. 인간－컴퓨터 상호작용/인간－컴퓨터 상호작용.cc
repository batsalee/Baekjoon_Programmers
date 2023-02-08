#include <iostream>
#include <vector>

int main()
{
	std::string str;
	std::cin >> str;

	std::vector<std::vector<int>> ps(str.length() + 1, std::vector<int>(26, 0));
	for (int i = 1; i < str.length() + 1; i++) {
		for (int j = 0; j < 26; j++) {
			if (ps[i - 1][j]) ps[i][j] = ps[i - 1][j];
		}
		ps[i][str[i - 1] - 'a']++;
	}
		
	int number_of_testcase;
	std::cin >> number_of_testcase;

	while (number_of_testcase--) {
		char c;
		int l, r;
		std::cin >> c >> l >> r;

		std::cout << ps[r + 1][c - 'a'] - ps[l][c - 'a'] << '\n';
	}
	
	return 0;
}