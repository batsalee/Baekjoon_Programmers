#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int M;
	cin >> M;

	int S = 0;
	string input;
	int i;
	while (M--) {
		cin >> input;
		
		if (input == "add") {
			cin >> i;
			S |= (1 << (i-1));
		}
		else if (input == "remove") {
			cin >> i;
			S &= ~(1 << (i - 1));
		}
		else if (input == "check") {
			cin >> i;
			if (S & (1 << (i - 1))) cout << 1 << '\n';
			else cout << 0 << '\n';
		}
		else if (input == "toggle") {
			cin >> i;
			S ^= (1 << (i - 1));
		}
		else if (input == "all") {
			S = 1048575;
		}
		else if (input == "empty") {
			S = 0;
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}