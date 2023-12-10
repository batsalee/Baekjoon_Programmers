#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int S, M;
	cin >> S >> M;

	for (int i = 9; i >= 0; i--) {
		if (S >= (1 << i)) S -= (1 << i);
	}
	if (S == 0) {
		cout << "No thanks";
		return;
	}

	for (int i = 9; i >= 0; i--) {
		if (S & (1 << i)) {
			S -= (M & (1 << i));
			M &= ~(1 << i);
		}
	}
	if (S == 0) {
		cout << "Thanks";
		return;
	}

	cout << "Impossible";
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}