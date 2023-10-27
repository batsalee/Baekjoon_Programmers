#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int now = 0, in, out, max = 0;
	for (int i = 0; i < 10; i++) {
		cin >> out >> in;
		now = now - out + in;
		max = (now > max) ? now : max;
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