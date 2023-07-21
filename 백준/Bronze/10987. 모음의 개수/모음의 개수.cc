#include <bits/stdc++.h>
using namespace std;

void solve()
{
	string input;
	cin >> input;

	int res = 0;
	for (char c : input) {
		if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') res++;
	}

	cout << res;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}