#include <iostream>

int sugar_count(int kg)
{
	int result = 0;
	int calc = kg;
	do
	{
		if (calc % 5 == 0)
		{
			result += (calc / 5);
			return result;
		}

		calc -= 3;
		result++;
		
	} while (calc > 0);

	result = 0;
	calc = kg;
	do
	{
		if (calc % 3 == 0)
		{
			result += (calc / 3);
			return result;
		}

		calc -= 5;
		result++;		
	}while (calc > 0);

	return -1;
}

int main()
{
	int kg;
	std::cin >> kg;

	std::cout << sugar_count(kg);

	return 0;
}