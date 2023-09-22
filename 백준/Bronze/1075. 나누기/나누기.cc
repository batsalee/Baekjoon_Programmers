#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int N, F;
	cin >> N >> F;

	int result;
	for (int i = N / 100 * 100; i <= N / 100 * 100 + 99; i++) {
		if (i % F == 0) {
			result = i % 100;
			break;
		}
	}

	if (result < 10) cout << '0' << result;
	else cout << result;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}