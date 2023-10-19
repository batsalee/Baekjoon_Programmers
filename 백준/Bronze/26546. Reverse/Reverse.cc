#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int N;
	cin >> N;

	while (N--) {
		string input;
		int s, e;
		cin >> input >> s >> e;

		for (int i = 0; i < input.size(); i++) {
			if(s > i || i >= e) cout << input[i];
		}
		cout << '\n';
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}