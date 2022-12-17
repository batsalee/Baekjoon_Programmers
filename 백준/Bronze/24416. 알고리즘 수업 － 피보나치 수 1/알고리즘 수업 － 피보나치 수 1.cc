#include <iostream>
#include <vector>

int count_fib = 0;
int count_fibonacci = 0;

int fib(int n)
{	
	if (n == 1 || n == 2) {
		count_fib++;
		return 1;
	}
	else return fib(n - 1) + fib(n - 2);
}

int fibonacci(int n)
{
	std::vector<int> f(n+1);
	f[1] = f[2] = 1;
	for (int i = 3; i <= n; i++) {
		count_fibonacci++;
		f[i] = f[i - 1] + f[i - 2];
	}

	return f[n];
}

int main()
{
	int input;
	std::cin >> input;

	fib(input);
	fibonacci(input);
	std::cout << count_fib << ' ' << count_fibonacci;

	return 0;
}