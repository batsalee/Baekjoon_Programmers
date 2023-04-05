#include <iostream>

int main()
{
	int angle[3];
	for (int i = 0; i < 3; i++) {
		std::cin >> angle[i];
	}

	if (angle[0] + angle[1] + angle[2] != 180) std::cout << "Error";
	else if (angle[0] == 60 && angle[1] == 60 && angle[2] == 60) std::cout << "Equilateral";
	else if (angle[0] == angle[1] || angle[0] == angle[2] || angle[1] == angle[2]) std::cout << "Isosceles";
	else std::cout << "Scalene";

	return 0;
}