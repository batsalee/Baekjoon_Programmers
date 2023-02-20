#include <iostream>

int main()
{
	int day;
	std::cin >> day;

	int car_number[5];
	int answer = 0;
	for (int i = 0; i < 5; i++) {
		std::cin >> car_number[i];
		if (car_number[i] == day) answer++;
	}

	std::cout << answer;

	return 0;
}