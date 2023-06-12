#include <iostream>

#define MAX 90

long long fibonacci[MAX + 1];

void fibo_cal()
{
	fibonacci[0] = 0;
	fibonacci[1] = 1;

	for (int i = 2; i <= MAX; i++) {
		fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
	}
}

int main()
{
	fibo_cal();

	int n;
	std::cin >> n;
	std::cout << fibonacci[n];

	return 0;
}