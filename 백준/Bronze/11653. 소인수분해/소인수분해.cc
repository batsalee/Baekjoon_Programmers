#include <iostream>

int main()
{
	int input;
	std::cin >> input;

	int prime = 2;
	while (input != 1)
	{
		if (input % prime) prime++;
		else
		{
			std::cout << prime << std::endl;
			input /= prime;
		}
	}

	return 0;
}