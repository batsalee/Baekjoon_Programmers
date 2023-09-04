#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int N;
	cin >> N;

	vector<int> cards(N + 1, 0);
	int sum = 0;
	for (int i = 1; i <= N; i++) {
		cin >> cards[i];
		if (cards[i] != cards[i - 1] + 1) sum += cards[i];
	}

	cout << sum;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}