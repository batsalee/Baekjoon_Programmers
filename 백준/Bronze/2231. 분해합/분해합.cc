#include <iostream>

int find_constructor(int n)
{
	for (int i = 1; i < n; i++) {
		int temp = i;
		int sum = temp;
		while (temp) { sum += temp % 10; temp /= 10; }

		if (sum == n) return i;
	}
	return 0;
}

int main()
{
	int input;
	std::cin >> input;

	std::cout << find_constructor(input);

	return 0;
}