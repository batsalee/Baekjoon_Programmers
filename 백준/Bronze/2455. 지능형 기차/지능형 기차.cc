#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int out, in, now = 0, max = 0;
	for (int i = 0; i < 4; i++) {
		cin >> out >> in;
		now = now - out + in;
		max = std::max(max, now);
	}

	cout << max;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}