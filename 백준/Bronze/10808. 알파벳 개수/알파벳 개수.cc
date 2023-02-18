#include <iostream>

int main()
{
	std::string input;
	std::cin >> input;

	int count[26] = { 0 };
	for (int i = 0; i < input.length(); i++) {
		count[input[i] - 'a']++;
	}

	for (int i = 0; i < 26; i++) {
		std::cout << count[i] << ' ';
	}

	return 0;
}