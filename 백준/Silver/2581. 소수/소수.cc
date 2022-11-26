#include <iostream>

int main()
{
	int num1, num2;
	std::cin >> num1 >> num2;

	int min, sum = 0;
	for (int i = num2; i >= num1; i--)
	{
		int j;
		for (j = 2; j < i; j++)
		{
			if (i % j == 0) break;
		}
		if (j == i)
		{
			sum += i;
			min = i;
		}
	}
	if (sum)
		std::cout << sum << std::endl << min;
	else
		std::cout << -1;

	return 0;
}