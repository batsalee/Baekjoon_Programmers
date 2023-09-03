#include <bits/stdc++.h>
using namespace std;

void solve()
{
	string input;
	cin >> input;

	istringstream ss(input);
	string split[3];
	for (int i = 0; i < 3; i++) {
		getline(ss, split[i], '/');
	}

	if (stoi(split[0]) + stoi(split[2]) < stoi(split[1]) || split[1] == "0") cout << "hasu";
	else cout << "gosu";
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}