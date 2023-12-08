#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int X;
	cin >> X;

	int count = 0;
	for (int i = 0; i <= 6; i++) {
		if (X & (1 << i)) count++;
	}

	cout << count;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}