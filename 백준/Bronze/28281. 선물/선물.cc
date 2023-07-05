#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int N, X;
	cin >> N >> X;

	vector<int> prices(N);
	for (int i = 0; i < N; i++) {
		cin >> prices[i];
	}

	int min = prices[0] + prices[1];
	for (int i = 1; i < N - 1; i++) {
		min = std::min(min, prices[i] + prices[i + 1]);
	}

	cout << min * X;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}