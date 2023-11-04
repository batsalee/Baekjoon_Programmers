#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int T;
	cin >> T;

	while (T--) {
		int N;
		cin >> N;

		int input, sum = 0;
		while (N--) {
			cin >> input;
			sum += input;
		}

		cout << sum << '\n';
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}