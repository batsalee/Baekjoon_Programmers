#include <bits/stdc++.h>
using namespace std;

void solve()
{
	string T;
	cin >> T;

	int l = 0, r = 0;
	for (int i = 0; i < T.size(); i++) {
		if (T[i] == '(') break;
		else if (T[i] == '@') l++;
	}

	for (int i = T.size(); i >= 0; i--) {
		if (T[i] == ')') break;
		else if (T[i] == '@') r++;
	}

	cout << l << ' ' << r;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}