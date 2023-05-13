#include <iostream>

int main() {
	const int number_of_word = 5;
	const int limit_of_length = 15;

	std::string words[number_of_word];
	for (int i = 0; i < number_of_word; i++) {
		std::cin >> words[i];
	}

	std::string result = "";
	for (int i = 0; i < limit_of_length; i++) {
		for (int j = 0; j < number_of_word; j++) {
			if (i < words[j].length()) {
				result += words[j][i];
			}
		}
	}

	std::cout << result;

	return 0;
}