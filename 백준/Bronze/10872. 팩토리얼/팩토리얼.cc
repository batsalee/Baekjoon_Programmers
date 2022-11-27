#include <iostream>

int factorial(int n)
{
	if (n == 0) return 1;
	else return n * factorial(n - 1);
}

int main()
{
	int input;
	std::cin >> input;

	std::cout << factorial(input);

	return 0;
}