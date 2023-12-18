#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int N; string K;
	cin >> N >> K;

	int count = 0;
	for (int i = 0; i < N; i++) {
		if (K[i] == '1') count++;
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