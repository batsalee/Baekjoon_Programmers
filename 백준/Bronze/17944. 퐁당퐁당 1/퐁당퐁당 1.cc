#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int N, T;
	cin >> N >> T;

	int count = 0, toggle = 1;
	while (T--) {
		if (toggle == 1 && count == 2 * N) toggle = -1;
		if (toggle == -1 && count == 1) toggle = 1;
		count += toggle;
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