#include <iostream>

int main() {
	int n;	
	std::cin >> n;

	long long now = 0, result = 0;
	for (int i = 1; i <= n - 2; i++) {
		now += i;
		result += now;
	}

	std::cout << result << '\n' << 3;

	return 0;
}