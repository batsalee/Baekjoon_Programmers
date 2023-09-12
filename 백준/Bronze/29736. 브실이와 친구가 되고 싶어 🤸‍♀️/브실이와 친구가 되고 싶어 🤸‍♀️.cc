#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int A, B, K, X;
	cin >> A >> B >> K >> X;
	
	int result = min(K + X, B) - max(K - X, A) + 1;
	if (result > 0) cout << result;
	else cout << "IMPOSSIBLE";
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}