#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int N, A, B, C;
	cin >> N >> A >> B >> C;
	cout << min(N, A) + min(N, B) + min(N, C);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}