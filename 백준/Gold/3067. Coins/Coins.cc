#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int T;
	cin >> T;

	while (T--) {
		int N;
		cin >> N;

		vector<int> coins(N);
		for (int i = 0; i < N; i++) {
			cin >> coins[i];
		}

		int M;
		cin >> M;

		vector<int> cases(M + 1, 0);
		cases[0] = 1;
		for (int i : coins) {
			for (int j = i; j <= M; j++) {
				cases[j] += cases[j - i];
			}
		}

		cout << cases[M] << '\n';
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}