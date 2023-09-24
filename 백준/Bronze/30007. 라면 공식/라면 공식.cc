#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int N;
	cin >> N;

	while (N--) {
		int A, B, X;
		cin >> A >> B >> X;
		cout << A * (X - 1) + B << '\n';
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}