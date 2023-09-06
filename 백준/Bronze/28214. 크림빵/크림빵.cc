#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int N, K, P;
	cin >> N >> K >> P;

	int result = 0;
	for (int i = 0; i < N; i++) {
		int pack = 0, cream;
		for (int j = 0; j < K; j++) {
			cin >> cream;
			pack += cream;
		}
		if (K - pack < P) result++;
	}

	cout << result;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}