#include <iostream>
#include <cmath>

bool is_primenumber(int n)
{
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0) return false;
	}
	return true;
}

int main()
{
	int number_of_testcase;
	std::cin >> number_of_testcase;
		
	int prime;
	while (number_of_testcase--)
	{
		int input;
		std::cin >> input;

		for (int i = input / 2; i >= 2; i--)
		{
			if (is_primenumber(i))
			{
				if (is_primenumber(input - i))
				{
					std::cout << i << ' ' << input - i << '\n';
					break;
				}
			}
		}
	}
		
	return 0;
}