#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int result[100] = { 1 };
	for (int i = 1; i < 100; i++) {
		result[i] = pow(i + 1, 2) + result[i - 1];
	}
		
	int N;
	while (true) {
		cin >> N;
		if (N == 0) break;

		cout << result[N - 1] << '\n';
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}