#include <iostream>
#include <numeric>

int main()
{
	int num1, num2;
	std::cin >> num1 >> num2;

	std::cout << std::gcd(num1, num2) << '\n' << std::lcm(num1, num2);
	
	return 0;
}