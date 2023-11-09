#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int N, M;
	cin >> N >> M;

	vector<int> K(M);
	for (int i = 0; i < M; i++) {
		cin >> K[i];
	}

	int sum = 0;
	for (int i = 1; i <= N; i++) {
		for (int j = 0; j < M; j++) {
			if (i % K[j] == 0) {
				sum += i;
				break;
			}
		}
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