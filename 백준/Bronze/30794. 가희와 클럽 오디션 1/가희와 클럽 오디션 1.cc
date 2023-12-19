#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int lv;
	string judgment;
	cin >> lv >> judgment;

	if (judgment == "miss") cout << 0;
	else if (judgment == "bad") cout << 200 * lv;
	else if (judgment == "cool") cout << 400 * lv;
	else if (judgment == "great") cout << 600 * lv;
	else if (judgment == "perfect") cout << 1000 * lv;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}