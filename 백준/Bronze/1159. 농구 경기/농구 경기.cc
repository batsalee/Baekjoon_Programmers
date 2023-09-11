#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int N;
	cin >> N;

	map<char, int> names;
	string player;
	while (N--) {
		cin >> player;

		names[player[0]]++;
	}

	bool isThere = false;
	for (auto itr = names.begin(); itr != names.end(); itr++) {
		if (itr->second >= 5) {
			cout << itr->first;
			isThere = true;
		}
	}

	if (isThere == false) cout << "PREDAJA";
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}