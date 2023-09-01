#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int N;
	cin >> N;
	while (N--) {
		int M;
		cin >> M;

		vector<long long> K(M), D(M), A(M);
		long long sum = 0;
		for (int i = 0; i < M; i++) {
			cin >> K[i] >> D[i] >> A[i];
		}

		int k, d, a;
		cin >> k >> d >> a;

		for (int i = 0; i < M; i++) {
			sum += max(0LL, K[i] * k - D[i] * d + A[i] * a);
		}

		cout << sum << '\n';
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}