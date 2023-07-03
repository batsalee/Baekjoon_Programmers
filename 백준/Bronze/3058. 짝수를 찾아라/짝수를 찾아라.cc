#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int T;
	cin >> T;

	while (T--) {
		int input, min = 100, sum = 0;
		for (int i = 0; i < 7; i++) {
			cin >> input;
			if (input % 2 == 0) {
				sum += input;
				if (input < min) min = input;
			}		
		}
		cout << sum << ' ' << min << '\n';
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}