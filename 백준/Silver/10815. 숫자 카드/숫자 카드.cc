#include <iostream>
#include <unordered_set>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int number_of_card;
	std::cin >> number_of_card;

	std::unordered_set<int> cards;
	int input;
	for (int i = 0; i < number_of_card; i++) {
		std::cin >> input;
		cards.insert(input);
	}

	int number_of_testcase;
	std::cin >> number_of_testcase;

	for (int i = 0; i < number_of_testcase; i++) {
		std::cin >> input;
		( cards.find(input) != cards.end() ) ? std::cout << "1 " : std::cout << "0 ";
	}

	return 0;
}