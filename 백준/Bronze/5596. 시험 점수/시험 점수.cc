#include <iostream>

int main()
{
	int S = 0, T = 0;

	int input;
	for (int i = 0; i < 4; i++) {
		std::cin >> input;
		S += input;
	}
	for (int i = 0; i < 4; i++) {
		std::cin >> input;
		T += input;
	}

	std::cout << ((S >= T) ? S : T);

	return 0;
}