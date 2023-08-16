#include <bits/stdc++.h>
using namespace std;

void solve()
{	
	int L;
	cin >> L;

	if (L % 5) cout << L / 5 + 1;
	else cout << L / 5;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}