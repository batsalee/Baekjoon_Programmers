#include <iostream>

int main()
{
	int M, D;
	std::cin >> M >> D;

	if (M < 2) std::cout << "Before"; // 1월일때
	else if (M == 2) { // 2월일때
		if (D < 18) std::cout << "Before";
		else if (D == 18) std::cout << "Special";
		else std::cout << "After";
	}
	else std::cout << "After"; // 3~12월 일때

	return 0;
}