#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int N;
	cin >> N;

	vector<int> scores(N);
	for (int i = 0; i < N; i++) {
		cin >> scores[i];
	}

	int X, Y;
	cin >> X >> Y;

	cout << N * X / 100 << ' ';
	int absolute = 0;
	for (int s : scores) {
		if (s >= Y) absolute++;
	}
	cout << absolute;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}