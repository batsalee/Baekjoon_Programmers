#include <iostream>
#include <numeric>

int main()
{
	int number_of_testcase;
	std::cin >> number_of_testcase;

	int num1, num2;
	while (number_of_testcase--) {
		std::cin >> num1 >> num2;
		std::cout << std::lcm(num1, num2) << '\n';
	}	
	
	return 0;
}