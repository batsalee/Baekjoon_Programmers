#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin >> n;

	int res_a = 100, res_b = 100;
	int a, b;
	while (n--) {		
		cin >> a >> b;

		if (a > b) res_b -= a;
		else if (a < b) res_a -= b;
	}

	cout << res_a << '\n' << res_b;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}