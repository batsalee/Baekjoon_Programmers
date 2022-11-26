#include <iostream>

int main()
{
	int number_of_testcase;
	std::cin >> number_of_testcase;

	int result = 0;
	int input;
	while (number_of_testcase--)
	{
		std::cin >> input;
		// 소수인지 판별
		// 소수면 result++
		int i;
		for (i = 2; i < input; i++)
		{
			if (input % i == 0) break;
		}
		if (i == input) result++;
	}

	std::cout << result;

	return 0;
}