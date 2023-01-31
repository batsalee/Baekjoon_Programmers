#include <iostream>
#include <vector>

int main()
{
	int day, for_day;
	std::cin >> day >> for_day;

	std::vector<int> temperatures(day);
	for (int i = 0; i < day; i++) {
		std::cin >> temperatures[i];
	}

	int max_sum = -10001;
	int temp_sum = 0;
	for (int i = 0; i <= day - for_day; i++) {
		for (int j = i; j < i + for_day; j++) {
			temp_sum += temperatures[j];
		}
		if (temp_sum > max_sum) max_sum = temp_sum;
		temp_sum = 0;
	}

	std::cout << max_sum;

	return 0;
}