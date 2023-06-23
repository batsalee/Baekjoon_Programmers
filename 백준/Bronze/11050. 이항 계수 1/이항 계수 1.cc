#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
	int result = 1;

	for (int i = 1; i <= n; i++) {
		result *= i;
	}

	return result;
}

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);

	int N, K;
	cin >> N >> K;

	cout << factorial(N) / factorial(N - K) / factorial(K);

	return 0;
}