#include <iostream>
#include <vector>
#include <algorithm>

void bigSum(std::string &result, std::string num1, std::string num2)
{
	int sum = 0;
	while (!num1.empty() || !num2.empty() || sum) {
		if (!num1.empty()) {
			sum += num1.back() - '0';
			num1.pop_back();
		}
		if (!num2.empty()) {
			sum += num2.back() - '0';
			num2.pop_back();
		}
		result.push_back((sum % 10 + '0'));
		sum /= 10;
	}
	reverse(result.begin(), result.end());
}

std::string fibonacci(int n)
{
	std::vector<std::string> fib(n + 2);
	fib[0] = "0";
	fib[1] = "1";

	for (int i = 2; i <= n; i++) {
		bigSum(fib[i], fib[i - 1], fib[i - 2]);
	}

	return fib[n];
}

int main()
{
	int n;
	std::cin >> n;

	std::cout << fibonacci(n);
	
	return 0;
}