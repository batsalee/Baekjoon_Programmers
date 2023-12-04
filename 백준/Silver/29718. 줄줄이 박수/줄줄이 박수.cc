#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int N, M;
	cin >> N >> M;

	vector<int> ps(M + 1, 0);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			int Q;
			cin >> Q;
			ps[j + 1] += Q;
		}
	}

	// make prefix sum
	for (int i = 1; i < M + 1; i++) {
		ps[i] += ps[i - 1];
	}

	int A, max = 0;
	cin >> A;
	for (int i = A; i < M + 1; i++) {
		max = std::max(max, ps[i] - ps[i - A]);
	}

	cout << max;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}