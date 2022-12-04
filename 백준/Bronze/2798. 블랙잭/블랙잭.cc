#include <iostream>
#include <vector>

int main()
{
	int number_of_card, limit;
	std::cin >> number_of_card >> limit;
	
	std::vector<int> cards(number_of_card);
	for (int i = 0; i < number_of_card; i++) {
		std::cin >> cards[i];
	}

	int biggest = 0;
	int sum = 0;
	for (int i = 0; i < number_of_card - 2; i++) {
		for (int j = i+1; j < number_of_card - 1; j++) {
			for (int k = j+1; k < number_of_card; k++) {
				sum = cards[i] + cards[j] + cards[k];
				if (sum <= limit && sum > biggest) biggest = sum;
			}
		}
	}

	std::cout << biggest;

	return 0;
}