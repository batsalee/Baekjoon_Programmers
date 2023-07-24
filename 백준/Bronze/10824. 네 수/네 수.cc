#include <bits/stdc++.h>
using namespace std;

void solve()
{	
	string input[4];
	for (int i = 0; i < 4; i++) {
		cin >> input[i];
	}

	cout << stoll(input[0] + input[1]) + stoll(input[2] + input[3]);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}