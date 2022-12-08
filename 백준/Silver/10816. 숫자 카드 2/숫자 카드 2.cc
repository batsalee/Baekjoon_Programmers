#include <iostream>
#include <map>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int number_of_card;
	std::cin >> number_of_card;

	std::map<int, int> cards;
	int input;
	for (int i = 0; i < number_of_card; i++) {
		std::cin >> input;
		cards[input]++;
	}

	int number_of_test;
	std::cin >> number_of_test;
	for (int i = 0; i < number_of_test; i++) {
		std::cin >> input;
		std::cout << cards[input] << ' ';
	}

	return 0;
}