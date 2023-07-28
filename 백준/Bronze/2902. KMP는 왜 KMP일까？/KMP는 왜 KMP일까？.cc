#include <bits/stdc++.h>
using namespace std;

void solve()
{	
	string input;
	cin >> input;

	stringstream ss(input);
	string buffer, res = "";
	while (getline(ss, buffer, '-')) {
		res += buffer[0];
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