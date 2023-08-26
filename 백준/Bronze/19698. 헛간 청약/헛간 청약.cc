#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int N, W, H, L;
	cin >> N >> W >> H >> L;
	cout << min(N, (W / L) * (H / L));
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}