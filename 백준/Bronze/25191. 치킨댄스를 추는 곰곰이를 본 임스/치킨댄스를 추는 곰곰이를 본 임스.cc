#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int N, A, B;
	cin >> N >> A >> B;
	cout << min(N, A / 2 + B);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}