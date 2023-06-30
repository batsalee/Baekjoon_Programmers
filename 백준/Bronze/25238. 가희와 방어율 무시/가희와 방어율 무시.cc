#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int a, b;
	cin >> a >> b;

	double res = a * (100 - b) / 100.0;
	
	cout << (res < 100) ? 1 : 0;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}