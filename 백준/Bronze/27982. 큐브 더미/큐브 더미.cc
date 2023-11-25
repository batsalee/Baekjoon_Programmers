#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int N, M;
	cin >> N >> M;

	bool cube[5][5][5] = { false };
	int i, j, k;
	for (int l = 0; l < M; l++) {
		cin >> i >> j >> k;
		cube[i - 1][j - 1][k - 1] = true;
	}

	int count = 0;
	for (int l = 1; l < N - 1; l++) {
		for (int m = 1; m < N - 1; m++) {
			for (int n = 1; n < N - 1; n++) {
				if (cube[l][m][n] && 
					cube[l - 1][m][n] && cube[l + 1][m][n] &&
					cube[l][m - 1][n] && cube[l][m + 1][n] && 
					cube[l][m][n - 1] && cube[l][m][n + 1]
					) count++;
			}
		}
	}

	cout << count;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}