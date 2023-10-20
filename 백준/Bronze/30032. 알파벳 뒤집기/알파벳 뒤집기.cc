#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int N, D;
	cin >> N >> D;

	string input;
	while (N--) {
		cin >> input;
		for (char c : input) {
			if (c == 'd') {
				if (D == 1) cout << 'q';
				else cout << 'b';
			}
			else if (c == 'b') {
				if (D == 1) cout << 'p';
				else cout << 'd';
			}
			else if (c == 'q') {
				if (D == 1) cout << 'd';
				else cout << 'p';
			}
			else if (c == 'p') {
				if (D == 1) cout << 'b';
				else cout << 'q';
			}
		}
		cout << '\n';
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}