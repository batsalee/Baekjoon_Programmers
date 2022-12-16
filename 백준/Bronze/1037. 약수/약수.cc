#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	int number_of_divisor;
	std::cin >> number_of_divisor;

	std::vector<int> divisors(number_of_divisor);
	for (int i = 0; i < number_of_divisor; i++) {
		std::cin >> divisors[i];
	}
	sort(divisors.begin(), divisors.end());
	if (number_of_divisor == 1) std::cout << divisors[0] * divisors[0];
	else std::cout << divisors[0] * divisors[number_of_divisor-1];

	return 0;
}