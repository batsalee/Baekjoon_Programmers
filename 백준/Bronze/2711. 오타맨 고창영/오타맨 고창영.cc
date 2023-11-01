#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int T;
	cin >> T;

	int location;
	string str;
	while (T--) {
		cin >> location >> str;
		cout << str.substr(0, location - 1) << str.substr(location) << '\n';
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}