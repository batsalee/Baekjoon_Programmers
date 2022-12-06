#include <iostream>
#include <string>

int main()
{
	int number_of_end = 665;
	int input;
	std::cin >> input;

	int i = 0;
	std::string temp;
	while (i < input) {
		temp = std::to_string(number_of_end);
		if (temp.find("666") != std::string::npos) i++;
		number_of_end++;		
	}

	std::cout << number_of_end-1;

	return 0;
}