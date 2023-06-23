#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int T;
	cin >> T;

	string input;
	while (T--) {
		stack<char> s;
		
		cin >> input;
		for (char c : input) {
			s.push(c);
		}

		int vps = 0;
		while (!s.empty()) {
			if (s.top() == ')') vps++;
			else vps--;

			s.pop();

			if (vps < 0) break;
		}

		if (vps == 0) cout << "YES" << '\n';
		else cout << "NO" << '\n';
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}