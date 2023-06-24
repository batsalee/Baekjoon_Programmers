#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int N;
	cin >> N;

	vector<int> v;
	for (int i = 1; i <= N; i++) {
		v.push_back(i);
	}

	do
	{
		for (int _v : v) {
			cout << _v << ' ';
		}
		cout << '\n';
	} while (next_permutation(v.begin(), v.end()));
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}