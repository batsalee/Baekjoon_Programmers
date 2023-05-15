#include <iostream>
#include <algorithm>

int main() {
	std::string word;
	std::cin >> word;

	std::string rev;
	rev = word;
	reverse(rev.begin(), rev.end());

	std::cout << (word == rev);

	return 0;
}