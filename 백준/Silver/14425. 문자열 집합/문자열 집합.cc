#include <iostream>
#include <unordered_set>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int number_of_sentence;
	std::cin >> number_of_sentence;

	int number_of_testcase;
	std::cin >> number_of_testcase;

	std::unordered_set<std::string> sentences;
	std::string input;
	for (int i = 0; i < number_of_sentence; i++) {
		std::cin >> input;
		sentences.insert(input);
	}

	int result = 0;
	for (int i = 0; i < number_of_testcase; i++) {
		std::cin >> input;
		if (sentences.find(input) != sentences.end()) result++;
	}

	std::cout << result;

	return 0;
}