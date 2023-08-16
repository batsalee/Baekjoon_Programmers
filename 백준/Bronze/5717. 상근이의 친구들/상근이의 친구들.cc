#include <bits/stdc++.h>
using namespace std;

void solve()
{	
	int M, F;
	
	while (true) {
		cin >> M >> F;

		if (M == 0 && F == 0) break;
		else cout << M + F << '\n';
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}