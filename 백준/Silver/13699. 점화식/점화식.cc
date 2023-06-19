#include <iostream>

int main()
{
	int n;
	std::cin >> n;

	long long t[36] = { 1, 1, 2, 5, };
	for (int i = 4; i <= n; i++) {
		for (int j = 0; j < i; j++) {
			t[i] += t[j] * t[i - j - 1];
		}
	}

	std::cout << t[n];
	
	return 0;
}