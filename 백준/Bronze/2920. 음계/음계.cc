#include <bits/stdc++.h>
using namespace std;

void solve()
{
	vector<int> ascending{ 1, 2, 3, 4, 5, 6, 7, 8 };
	vector<int> descending{ 8, 7, 6, 5, 4, 3, 2, 1 };

	vector<int> input(8);
	for (int i = 0; i < 8; i++) {
		cin >> input[i];
	}

	if (input == ascending) cout << "ascending";
	else if (input == descending) cout << "descending";
	else cout << "mixed";
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}