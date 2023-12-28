#include <bits/stdc++.h>
using namespace std;

void solve()
{
	string input;
	cin >> input;

	for (char& c : input) {
		if (c == 'A') cout << 'X';
		else if (c == 'B') cout << 'Y';
		else if (c == 'C') cout << 'Z';
		else cout << char(c - 3);
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}