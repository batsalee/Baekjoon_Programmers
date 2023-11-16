#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int a1, b1, a2, b2;
	
	cin >> a1 >> b1 >> a2 >> b2;
	int gunnar = a1 + b1 + a2 + b2;

	cin >> a1 >> b1 >> a2 >> b2;
	int emma = a1 + b1 + a2 + b2;

	if (gunnar > emma) cout << "Gunnar";
	else if (gunnar == emma) cout << "Tie";
	else cout << "Emma";
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}