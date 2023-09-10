#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int N;
	cin >> N;

	int A;
	double V = 0;
	while (N--) {
		cin >> A;
		V = (1 - (1 - V / 100.0) * (1 - A / 100.0)) * 100.0;

		cout.precision(6);
		cout << fixed;
		cout << V << '\n';
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}