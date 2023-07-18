#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int N;
	cin >> N;

	int sum = 0, input;
	for (int i = 0; i < N; i++) {
		cin >> input;
		sum += input;
	}

	sum += (N - 1) * 8;

	cout << sum / 24 << ' ' << sum % 24;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}