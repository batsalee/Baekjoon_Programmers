#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int numerator, denominator;
	
	while (true) {
		cin >> numerator >> denominator;
		if (numerator == 0 && denominator == 0) break;

		cout << numerator / denominator << ' ' << numerator % denominator << " / " << denominator << '\n';
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}