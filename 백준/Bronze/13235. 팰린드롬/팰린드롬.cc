#include <bits/stdc++.h>
using namespace std;

void solve()
{
	string input, rev;
	cin >> input;
	
	rev = input;
	reverse(rev.begin(), rev.end());

	cout << boolalpha << (input == rev);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}