#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int n;
	cin >> n;
	if (n == 1) {
		cout << 1;
		return 0;
	}
	
	vector<int> fib(n + 1);
	fib[1] = 1; fib[2] = 2;
	for (int i = 3; i <= n; i++) {
		fib[i] = ((fib[i - 1] % 10007) + (fib[i - 2] % 10007)) % 10007;
	}

	cout << fib[n];

	return 0;
}